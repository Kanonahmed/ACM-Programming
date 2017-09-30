#include<bits/stdc++.h>
using namespace std;
int m,n,ts,k;
vector<char>adj[20005];
map<char,int>mp;
int vis[20005],par[20005];
map<int ,char>str;
string st;
void bfs(int src,int nd)
{
    memset(vis,0,sizeof vis);
    memset(par,0,sizeof par);
    queue<int>q;
    vis[src]=1;
    q.push(src);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        if(u==nd)return ;
        for(int i=0; i<adj[u].size(); i++)
        {
            int v=adj[u][i];
            if(!vis[v])
            {
                vis[v]=1;
                par[v]=u;
                q.push(v);
            }
        }
    }
    return ;
}
void go(int nd,int src)
{
    if(nd==src)
    {
        st+=str[nd];
        return;
    }
    else
    {
        st+=str[nd];
        go(par[nd],src);
    }
}
int main()
{
    cin>>ts;
    while(ts--)
    {
        for(int i=0; i<20005; i++)adj[i].clear();
        mp.clear();
        str.clear();
        cin>>m>>n;
        k=0;
        for(int i=0; i<m; i++)
        {
            string x,y;
            cin>>x>>y;
            if(mp.find(x[0])==mp.end())
            {
                mp[x[0]]=k++;
                str[mp[x[0]]]=x[0];
            }

            if(mp.find(y[0])==mp.end())
            {
                mp[y[0]]=k++;
                str[mp[y[0]]]=y[0];
            }

            adj[mp[x[0]]].push_back(mp[y[0]]);
            adj[mp[y[0]]].push_back(mp[x[0]]);

        }
        for(int i=0; i<n; i++)
        {
            string a,b;
            cin>>a>>b;
            bfs(mp[a[0]],mp[b[0]]);
            st="";
            go(mp[b[0]],mp[a[0]]);
            for(int i=st.size()-1; i>=0; i--)cout<<st[i];
            cout<<endl;
        }
        if(ts)cout<<endl;
    }
    return 0;
}

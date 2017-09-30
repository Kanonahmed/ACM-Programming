#include<bits/stdc++.h>
using namespace std;
int vis[205];
vector<int>v[205];
int b;
int bfs()
{
    queue<int>q;
    q.push(0);
    vis[0]=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0; i<v[u].size(); i++)
        {
            int v1=v[u][i];
            if(vis[v1]==-1)
            {
                if(vis[u]==0)
                    vis[v1]=1;
                else
                    vis[v1]=0;
                q.push(v1);
            }
            else if(vis[u]==vis[v1])
            {
                b=1;
                break;
            }
        }
    }
}
int n,e;
int main()
{
    while(cin>>n)
    {
        if(n==0)break;
        memset(vis,-1,sizeof vis);
        for(int i=0;i<n;i++)
        v[i].clear();
        b=0;
        cin>>e;
        for(int i=0; i<e; i++)
        {
            int x,y;
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        bfs();
        if(b==1)
        {
            cout<<"NOT BICOLORABLE."<<endl;
        }
        else cout<<"BICOLORABLE."<<endl;
    }
    return 0;
}

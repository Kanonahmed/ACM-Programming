#include<bits/stdc++.h>
using namespace std;
const int N=30002;
vector<int>adj[N],cost[N];
int vis[N];
int n,mx;
int dfs(int s,int w)
{
    if(vis[s])return 0;
    if(mx<w)
    {
        mx=w;
        n=s;
    }
    vis[s]=1;
    for(int i=0; i<adj[s].size(); i++)
    {
        int v=adj[s][i];
        int c=w+cost[s][i];
        dfs(v,c);
    }
    return mx;
}
int main()
{
    int tc,tt=1;
    cin>>tc;
    while(tc--)
    {
        memset(vis,0,sizeof vis);
        for(int i=0; i<N; i++)
        {
            adj[i].clear();
            cost[i].clear();
        }
        int e,m;
        mx=-1;
        cin>>e;
        for(int i=0; i<e-1; i++)
        {
            int x,y,w;
            cin>>x>>y>>w;
            adj[x].push_back(y);
            adj[y].push_back(x);
            cost[x].push_back(w);
            cost[y].push_back(w);
            m=y;
        }
        int t=dfs(m,0);
        memset(vis,0,sizeof vis);
        mx=-1;
        int p=dfs(n,0);
        int ans=max(t,p);
        cout<<"Case "<<tt<<": "<<ans<<endl;
        tt++;
    }
    return 0;
}

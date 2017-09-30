#include<bits/stdc++.h>
using namespace std;
int rgraph[105][105],par[105];
vector<int>adj[105];
bool bfs(int s,int d)
{
    int vis[105]={0};
    queue<int>q;
    vis[s]=1;
    q.push(s);
    memset(par,0,sizeof par);
    while(!q.empty())
    {
        int u=q.front();q.pop();
        if(u==d)return true;
        for(int i=0;i<adj[u].size();i++)
        {
            int v=adj[u][i];
            if(rgraph[u][v]>0&&!vis[v])
            {
                vis[v]=1;
                par[v]=u;
                q.push(v);
            }
        }
    }
  return false;
}
int fold_fulkerson(int s,int d)
{
    int mx_flow=0;
    while(bfs(s,d)==true)
    {
     int mn=INT_MAX;
     for(int v=d;v!=s;v=par[v])
     {
         int u=par[v];
         mn=min(mn,rgraph[u][v]);
     }

     for(int v=d;v!=s;v=par[v])
     {
         int u=par[v];
         rgraph[u][v]-=mn;
         rgraph[v][u]+=mn;
     }
     mx_flow+=mn;
    }
    return mx_flow;
}
int main()
{
    int tc,ks=1;
    cin>>tc;
    while(tc--){
            for(int i=0;i<105;i++)adj[i].clear();
             memset(rgraph,0,sizeof rgraph);
    int s,t,c,n;
    cin>>n>>s>>t>>c;
    for(int i=0;i<c;i++)
    {
        int x,y,cs;
        cin>>x>>y>>cs;
        adj[x].push_back(y);
        adj[y].push_back(x);
        rgraph[x][y]+=cs;
        rgraph[y][x]+=cs;
    }

    int res=fold_fulkerson(s,t);
    cout<<"Case "<<ks++<<": "<<res<<endl;
    }
    return 0;
}

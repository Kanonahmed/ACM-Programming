#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100];
int a[1005][1005],p[1005];
bool bfs(int s,int t)
{
    bool vis[1005]={0};
    queue<int>q;
    q.push(s);
    vis[s]=1;
    while(!q.empty())
    {
        int u=q.front();q.pop();
        if(u==t)return true;
        for(int i=0;i<adj[u].size();i++)
        {
            int v=adj[u][i];
            if(a[u][v]&&!vis[v]){vis[v]=1;p[v]=u;q.push(v);}
        }
    }
    return false;
}
int fold_fulkarson(int s,int t)
{
    int max_flow=0;
    while(bfs(s,t))
    {
        int mn=INT_MAX;
        for(int v=t;v!=s;v=p[v])mn=min(a[p[v]][v],mn);
        for(int v=t;v!=s;v=p[v])
        {
            int u=p[v];
            a[u][v]-=mn;
            a[v][u]+=mn;
        }
        max_flow+=mn;
    }
    return max_flow;
}
int main()
{
  int ap,jb,re,s=0,t=1000;
  cin>>ap>>jb>>re;
  for(int i=0;i<re;i++)
  {
      int x,y;
      cin>>x>>y;
      if(!a[s][x]){
      adj[s].push_back(x);
      a[s][x]=1;
      }
      adj[x].push_back(y);
      a[x][y]=1;
      if(!a[y][t])
      {
          adj[y].push_back(t);
          a[y][t]=1;
      }
  }

 cout<<fold_fulkarson(s,t)<<endl;


    return 0;
}

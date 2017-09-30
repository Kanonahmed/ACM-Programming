//dfs only for directed graph
#include<bits/stdc++.h>
using namespace std;
int vis[50];
int lev[50];
int n,e,b;
vector<int>adj[50];
set<int>s;
/*int dfs(int st)
{
    if(vis[st])return 1;
    vis[st]=1;
    for(int i=0;i<adj[st].size();i++)
    {
        int v=adj[st][i];
        int t=dfs(v);
        if(t==1)return 1;
    }

}*/
int bfs(int st)
{
    queue<int>q;
    int k=0;
  vis[st]=1;
  lev[st]=0;
  q.push(st);
  while(!q.empty())
  {
      int u=q.front();q.pop();
      for(int i=0;i<adj[u].size();i++)
      {
          int v=adj[u][i];
          if(vis[v]!=1)
          {
              vis[v]=1;
              lev[v]=lev[u]+1;
              q.push(v);
          }
          else if(vis[v]==1)
          {
              b=1;
              break;
          }
      }
  }

}
int main()
{
 cin>>n>>e;
 for(int i=0;i<e;i++)
 {
     int x,y;
     cin>>x>>y;
     adj[x].push_back(y);
     adj[y].push_back(x);
 }
 int ss;
 cin>>ss;
 //int b=dfs(ss);
 bfs(ss);
 if(b==1)cout<<"Yes"<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
vector<int>adj[1005];
int vis[1005],n,m,st;
int dp[1005];
void bfs(int u)
{
  memset(vis,-1,sizeof vis);
  queue<int>q;
  q.push(u);
  vis[u]=0;
  while(!q.empty())
  {
      int uu=q.front();
      q.pop();
      for(int i=0;i<adj[uu].size();i++)
      {
          int v=adj[uu][i];
          if(vis[v]==-1)
          {
              vis[v]=vis[uu]+6;
              q.push(v);
          }
      }
  }
  return ;
}
int main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
      for(int i=0;i<1005;i++)adj[i].clear();
      cin>>n>>m;
      for(int i=0;i<m;i++)
      {
          int x,y;
          cin>>x>>y;
          adj[x].push_back(y);
          adj[y].push_back(x);
      }
      cin>>st;
      bfs(st);
      for(int i=1;i<=n;i++)
      {
          if(st==i)continue;
          cout<<vis[i]<<" ";
      }
      cout<<endl;

  }



    return 0;
}

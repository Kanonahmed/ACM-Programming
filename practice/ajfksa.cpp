#include<bits/stdc++.h>
using namespace std;
vector<int>adj[1000];
bool vis[1000];
void dfs(int u)
{
   if(vis[u])return ;
   cout<<u<<" ";  // print node
   vis[u]=1;
   for(int i=0;i<adj[u].size();i++)
   {
       int v=adj[u][i];
       if(!vis[v])dfs(v);
   }
}
int main()
{
   int node,edge;
   cin>>node>>edge;  // number of node & edge respectively
    for(int i=0;i<edge;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);  //adjacency list
        adj[y].push_back(x);
    }
    int source;
    cin>>source;  // start journey from this node
   dfs(source);  //calling function dfs()
    return 0;
}

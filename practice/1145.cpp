#include<bits/stdc++.h>
using namespace std;
vector<int>edge[205];
vector<int>cost[205];
vector<int>node;
int n,e,vis[205];
int dfs(int src)
{
    if(vis[src]) return 0;
    vis[src]=1;
    node.push_back(src);
    for(int i=0;i<edge[src].size();i++)
    {
        int y=edge[src][i];
        if(!vis[y]) dfs(y);
    }
}
int main()
{
    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        edge[x].push_back(y);
        edge[y].push_back(x);
    }
   int st;
   cin>>st;
   dfs(st);
   for(int i=0;i<node.size();i++)
   cout<<node[i]<<" ";

    return 0;
}

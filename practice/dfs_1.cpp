#include<bits/stdc++.h>
using namespace std;
vector<int>edge[100];
vector<int>v;
int n,e,vis[200];
int dfs(int src)
{
    vis[src]=1;
    v.push_back(src);
    for(int i=0;i<edge[src].size();i++)
    {
        int u=edge[src][i];
        if(!vis[u]) dfs(u);
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
    }
    int st;
    cin>>st;
    dfs(st);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";

    return 0;
}

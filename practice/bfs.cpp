#include<bits/stdc++.h>
using namespace std;
int vis[1000];
vector<int>edge[1000];
vector<int> cost[1000];
int n,e,en;
void bfs(int src)
{
    queue<int>q;
    int visited[1000]={0};
    //int parent[1000];
    int level[1000]={0};
    q.push(src);
    visited[src]=1;
    level[src]=0;
    while(!q.empty())
    {
        int u=q.front();
        for(int i=0;i<edge[u].size();i++)
        {
            int v=edge[u][i];
            if(!visited[v])
            {
                visited[v]=1;
                level[v]=level[u]+1;
                //parent[v]=u;
                q.push(v);
            }
        }
        q.pop();
    }
    //for(int i=1;i<=n;i++)
    cout<<src<<" to "<<en<<" distance "<<level[en]<<endl;
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
    cin>>st>>en;
    bfs(st);



    return 0;
}

#include<bits/stdc++.h>
using namespace std;
vector<int>edge[200];
vector<int>cost[200];
int vis[200],level[200];
int e,n,st,ed;
void bfs(int src)
{
    queue<int>q;
    vis[src]=1;
    level[src]=0;
    q.push(src);
    while(!q.empty())
    {
        int u=q.front();
        for(int i=0;i<edge[u].size();i++)
        {
            int v=edge[u][i];
            if(!vis[v])
            {
                vis[v]=1;
                level[v]=level[u]+1;
                //parent[v]=u;
                q.push(v);

            }
        }
        q.pop();
    }
    cout<<st<<" "<<ed<<" "<<level[ed]<<endl;
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

    cin>>st>>ed;
    bfs(st);


    return 0;
}

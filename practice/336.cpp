#include<bits/stdc++.h>
using namespace std;
vector<int>v1[10000];
int e,vis[10000],l,cnt,st;
int level[10000];
int bfs(int src)
{
    queue<int>q;
    vis[src]=1;
    level[src]=0;
    q.push(src);
    while(!q.empty())
    {
        int u=q.front();q.pop();
        for(int i=0;i<v1[u].size();i++)
        {
            int v=v1[u][i];
            if(vis[v]!=1)
            {
                vis[v]=1;
                level[v]=level[u]+1;
                if(level[v]<=l)cnt++;
                q.push(v);
            }
        }
    }
}
int main()
{
    cin>>e;
    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        v1[x].push_back(y);
    }
    cin>>st>>l;
    bfs(st);
    cout<<cnt<<endl;

    return 0;
}

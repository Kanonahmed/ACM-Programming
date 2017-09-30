#include<bits/stdc++.h>
using namespace std;
int n,e;
int vis[100];
int level[100];
vector<int>p[100];
int bfs(int src)
{
    queue<int>q;
    vis[src]=1;
    level[src]=0;
    q.push(src);
    while(!q.empty())
    {
        int u=q.front();q.pop();
        for(int i=0;i<p[u].size();i++)
        {
            int v=p[u][i];
            if(vis[v]!=1)
            {
                vis[v]=1;
                level[v]=level[u]+1;
                q.push(v);
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
       p[x].push_back(y);
   }
 int st,en;
 cin>>st>>en;
 bfs(st);
if(vis[en]!=0)
{
    cout<<level[en]<<endl;
}
else cout<<"impossible"<<endl;
    return 0;
}

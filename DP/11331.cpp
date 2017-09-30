#include<bits/stdc++.h>
using namespace std;
vector<int>graph[1005];
queue<int>q;
int bipartite()
{
    int vis[1005];
    memset(vis,-1,sizeof vis);
    q.push(1);
    vis[1]=1;
    while(!q.empty())
    {
        int u=q.front();q.pop();
        for(int i=0;i<graph[u].size();i++)
        {
            int v=graph[u][i];
            if(vis[v]==-1)
            {
                vis[v]=1-vis[u];
                q.push(v);
            }
            else if(vis[u]==vis[v])return 0;
        }
    }
    return 1;
}
int main()
{
   int tc;
   cin>>tc;
   while(tc--)
   {
       int b,c,a;
       cin>>b>>c>>a;
       for(int i=0;i<a;i++)
       {
           int x,y;
           cin>>x>>y;
           graph[x].push_back(y);
           graph[y].push_back(x);
       }
       int t=bipartite();
       if(t)cout<<"yes"<<endl;
       else cout<<"no"<<endl;
   }
    return 0;
}

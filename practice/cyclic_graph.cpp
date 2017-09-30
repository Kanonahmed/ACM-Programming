#include<bits/stdc++.h>
using namespace std;
vector<int >edge[100];
vector<int> cost[100];
vector<int>v;
int vis[100],n,e;
void dfs(int st)
{
   if(vis[st]==1) return ;
   vis[st]=1;
   v.push_back(st);
   for(int i=0;edge[st].size();i++)
   {
       int u=edge[st][i];
       vis[u]=1;
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
int ss,ed;
cin>>ss>>ed;
dfs(ss);
for(int i=1;i<v.size();i++)
cout<<v[i]<<" ";
    return 0;
}

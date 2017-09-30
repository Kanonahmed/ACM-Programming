#include<bits/stdc++.h>
using namespace std;
vector<int>graph[1000];
int dp1[10000],dp2[10000],vl[10000],vis[10000];
pair<int,int>p[10000];
void go(int v,int pp)
{
    dp1[v]=vl[v];
    dp2[v]=0;
    for(int i=0;i<graph[v].size();i++)
    {
        int u=graph[v][i];
        if(u==pp)continue;
        go(u,v);
        dp1[v]+=dp2[u];
        dp2[v]+=max(dp1[u],dp2[u]);
    }
}
int main()
{
    int n,r;
    cin>>n>>r;
    for(int i=1;i<=n;i++)cin>>vl[i];
    for(int i=0;i<r;i++)
     {
         int x,y;cin>>x>>y;
         graph[x].push_back(y);
         graph[y].push_back(x);
     }
     go(1,0);
     cout<<max(dp1[1],dp2[1])<<endl;
     view(1,0);

    return 0;
}

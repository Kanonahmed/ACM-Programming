#include<bits/stdc++.h>
using namespace std;
vector<int>graph[1000];
int dp1[1000],dp2[1000],vis[1000],vl[1000];
void go(int u,int p)
{
    dp1[u]=vl[u];
    dp2[u]=0;
    for(int i=0;i<graph[u].size();i++)
    {
        int v=graph[u][i];
        if(v==p)continue;
        go(v,u);
        dp1[u]+=dp2[v];
        dp2[u]+=max(dp1[v],dp2[v]);
    }
    if(dp1[u]>dp2[u])vis[u]=1;
    else vis[u]=0;
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
   int mx=max(dp1[1],dp2[1]);
   cout<<mx<<endl;

    return 0;
}

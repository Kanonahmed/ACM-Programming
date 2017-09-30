#include<bits/stdc++.h>
using namespace std;
int a[100005],n,m,vis[100005];
vector<int>graph[100005];
int go(int u,int cnt)
{
    vis[u]=1;
    if(a[u])cnt++;
    else cnt=0;
    if(cnt>m)return 0;
    int ret=0,leaf=1;
    for(int i=0;i<graph[u].size();i++)
    {
        int v=graph[u][i];
        if(!vis[v])
        {ret+=go(graph[u][i],cnt);leaf=0;}
    }
    return leaf+ret;
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=0;i<n-1;i++)
    {
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    cout<<go(1,0)<<endl;

    return 0;
}

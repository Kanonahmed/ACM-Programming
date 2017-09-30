#include<bits/stdc++.h>
using namespace std;
int dp[105];
int value[105];
vector<int>graph[105];
int go(int u)
{
    int &ret=dp[u];
    if(ret!=-1)return dp[u];
    ret=0;
    for(int i=0;i<graph[u].size();i++)
    {
        int v=graph[u][i];
        ret=max(ret,go(v));
    }
    return ret+=value[u];
}
int main()
{
    int n,m;
    cin>>n>>m;
    memset(dp,-1,sizeof dp);
    for(int i=0;i<n;i++)
        cin>>value[i];
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
    }
    cout<<go(0)<<endl;


    return 0;
}

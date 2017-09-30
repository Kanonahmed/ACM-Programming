#include<bits/stdc++.h>
using namespace std;
int n,ed;
vector<int>edge[100005];
vector<int>cost[1000];
int vis[100005];
int rs,l;
int dfs(int u)
{
    if(vis[u]==1) return 0;
    vis[u]=1;
    int res=1;
    for(int j=0; j<edge[u].size(); j++)
    {
        int y=edge[u][j];
        if(!vis[y])res+=dfs(y);
    }
    return res;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>ed>>l;
        memset(vis,0,sizeof vis);
        for(int c=0; c<=n; c++)
            edge[c].clear();
        for(int i=0; i<ed; i++)
        {
            int x,y;
            cin>>x>>y;
            edge[x].push_back(y);

        }
        int sum=0;
        for(int k=0; k<l; k++)
        {
            int st;
            cin>>st;
            sum+=dfs(st);
        }
        cout<<sum<<endl;
    }
    return 0;
}


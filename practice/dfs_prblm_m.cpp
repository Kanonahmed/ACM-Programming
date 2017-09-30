#include<bits/stdc++.h>
using namespace std;
vector<int>graph[10002];
int vis[10002];
int dfs(int src)
{
    if(vis[src]) return 0;
    vis[src]=1;
    int res=1;
    for(int i=0;i<graph[src].size();i++)
    {
        int v=graph[src][i];
        if(!vis[v]) res+=dfs(v);
    }

    return res;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        for(int k=0;k<10002;k++)graph[k].clear();
        memset(vis,0,sizeof vis);
        int n,m,l;
        cin>>n>>m>>l;
        for(int i=0; i<m; i++)
        {
            int x,y;
            cin>>x>>y;
            graph[x].push_back(y);
            //graph[y].push_back(x);
        }
        int sum=0;
        for(int j=0; j<l; j++)
        {
            int st;
            cin>>st;
            sum+=dfs(st);
        }
        cout<<sum<<endl;
    }


    return 0;
}

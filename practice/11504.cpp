#include<bits/stdc++.h>
#define N 100002
using namespace std;
vector<int>graph[N];
int vis[N];
void dfs(int src)
{
    if(vis[src])return;
    vis[src]=1;
    for(int i=0; i<graph[src].size(); i++)
    {
        int v=graph[src][i];
        dfs(v);
    }
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m;
        for(int i=0; i<N; i++)graph[i].clear();
        memset(vis,0,sizeof vis);
        cin>>n>>m;
        for(int i=0; i<m; i++)
        {
            int x,y;
            cin>>x>>y;
            graph[x].push_back(y);
        }
        int cnt=0;
        vector<int>ans;
        for(int i=1; i<=n; i++)
        {
            if(!vis[i])
            {
                dfs(i);
                 ans.push_back(i);
            }
        }
        memset(vis,0,sizeof vis);
        for(int i=ans.size()-1;i>=0;i--)
        {
            if(!vis[ans[i]]){cnt++;dfs(ans[i]);}
        }
        cout<<cnt<<endl;
    }


    return 0;
}

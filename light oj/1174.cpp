#include<bits/stdc++.h>
using namespace std;
vector<int>graph[101];
int vis[101];
int cost[101],t;
void bfs(int st)
{
    memset(vis,0,sizeof vis);
    memset(cost,0,sizeof cost);
    queue<int>q;
    cost[st]=0;
    vis[st]=1;
    q.push(st);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0; i<graph[u].size(); i++)
        {
            int v=graph[u][i];
            if(!vis[v])
            {
                vis[v]=1;
                cost[v]=cost[u]+1;
                q.push(v);
            }
        }
    }
}
int main()
{
    int tc,c=1;
    cin>>tc;
    while(tc--)
    {
        for(int k=0;k<101;k++)graph[k].clear();
        int n,e;
        cin>>n>>e;
        for(int i=0; i<e; i++)
        {
            int x,y;
            cin>>x>>y;
            graph[x].push_back(y);
            graph[y].push_back(x);
        }
        int s,en;
        cin>>s>>en;
        bfs(s);
        int ad[n+1],final[n+1];
        for(int i=0;i<n;i++)ad[i]=cost[i];
        bfs(en);
        for(int i=0;i<n;i++){final[i]=ad[i]+cost[i];}
        sort(final,final+n);
        cout<<"Case "<<c<<": "<<final[n-1]<<endl;
        c++;
    }


    return 0;
}

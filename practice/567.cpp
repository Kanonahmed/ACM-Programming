#include<bits/stdc++.h>
using namespace std;
vector<int>graph[22];
int vis[22];
int cost[22],t;
int bfs(int st,int end)
{
    queue<int>q;
    vis[st]=1;
    cost[st]=0;
    q.push(st);
    while(!q.empty())
    {
        int u=q.front();q.pop();
        for(int i=0;i<graph[u].size();i++)
        {
            int v=graph[u][i];
            if(vis[v]!=1)
            {
                vis[v]=1;
                cost[v]=cost[u]+1;
                if(v==end){t=cost[v];return 0;}
                q.push(v);
            }
        }
    }
}
int main()
{
    int tc=1,d;
    while(cin>>d)
    {
        for(int i=0;i<d;i++)
        {
            int z;
            cin>>z;
            graph[1].push_back(z);
            graph[z].push_back(1);
        }
    for(int i=2; i<=19; i++)
    {
        int x;
        scanf("%d",&x);
        for(int j=0; j<x; j++)
        {
            int z;
            scanf("%d",&z);
            graph[i].push_back(z);
            graph[z].push_back(i);
        }
    }
    int n;
    scanf("%d",&n);
    cout<<"Test Set #"<<tc<<endl;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        t=0;
        memset(vis,0,sizeof vis);
        memset(cost,0,sizeof cost);
        bfs(a,b);
        printf("%2d to %2d:%2d\n",a,b,t);
    }
    cout<<endl;
    for(int k=0;k<22;k++)graph[k].clear();
    tc++;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int n,m,s,t;
vector<int>adj[20005];
vector<int>cst[20005];
int dis[20005];
struct data
{
    int x,cost;
    data(int __x,int __y)
    {
        x=__x;
        cost=__y;
    }
    bool operator <(const data& p)const
    {
        return cost>p.cost;
    }
};
int daikstra(int src,int ds)
{
    priority_queue<data>q;
    memset(dis,63,sizeof dis);
    dis[src]=0;
    q.push(data(src,0));
    while(!q.empty())
    {
        data u=q.top();
        q.pop();
        if(u.x==ds)return u.cost;
        for(int i=0; i<adj[u.x].size(); i++)
        {
            int v=adj[u.x][i];
            if(dis[v]>dis[u.x]+cst[u.x][i])
            {
                dis[v]=dis[u.x]+cst[u.x][i];
                q.push(data(v,dis[v]));
            }
        }
    }
    return -1;
}
int main()
{
    int ts=1,tt;
    scanf("%d",&tt);
    while(tt--)
    {
        for(int i=0; i<20005; i++)adj[i].clear();
        for(int i=0; i<20005; i++)cst[i].clear();
        cin>>n>>m>>s>>t;
        for(int i=0; i<m; i++)
        {
            int x,y,z;
            cin>>x>>y>>z;
            adj[x].push_back(y);
            adj[y].push_back(x);
            cst[x].push_back(z);
            cst[y].push_back(z);
        }
        int fl=daikstra(s,t);
        if(fl==-1)
            printf("Case #%d: unreachable\n",ts++);
        else
            printf("Case #%d: %d\n",ts++,dis[t]);
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
const int mx=1005;
int n,m;
vector<int>graph[mx],cost[mx];
int dis[mx];
struct data
{
    int nod,cs;
    data(int x,int y)
    {
        nod=x;
        cs=y;
    }
    bool operator <(const data& p)const
    {
        return cs>p.cs;
    }
};
int dijkstra(int s,int d)
{
    priority_queue<data>q;
    dis[s]=0;
    memset(dis,126,sizeof dis);
    q.push(data(s,0));
    while(!q.empty())
    {
        data dd=q.top();
        q.pop();
        int u=dd.nod;
        int c=dd.cs;
        if(u==d)return c;
        for(int i=0; i<graph[u].size(); i++)
        {
            int v=graph[u][i];
            int l=cost[u][i]+c;
            if(dis[v]>l)
            {
                dis[v]=l;
                q.push(data(v,l));
            }
        }
    }
    return -1;
}
int main()
{
    int tc,ks=1;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>m;
        for(int i=1; i<=m; i++)
        {
            int x,y,z;
            cin>>x>>y>>z;
            graph[x].push_back(y);
            graph[y].push_back(x);
            cost[x].push_back(z);
            cost[y].push_back(z);
        }
        int t=dijkstra(1,n);
        printf("Case %d: ",ks++);
        if(t==-1)cout<<"Impossible"<<endl;
        else cout<<t<<endl;
        for(int i=0; i<mx; i++)
        {
            graph[i].clear();
            cost[i].clear();
        }
    }
    return 0;
}

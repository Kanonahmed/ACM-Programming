#include<bits/stdc++.h>
#include<cstring>
using namespace std;
const int N=505;
vector<int>adj[505],cost[505];
int dis[505], par[505];
int e;
int n, m;
int best;
struct data
{
    int a, b;
    data(int _a, int _b)
    {
        a=_a, b=_b;
    }
    bool friend operator < (data x,data y)
    {
        return x.b>y.b;
    }
};

int dijkstra(int src,int nd)
{
    memset(dis, 63, sizeof dis);
    priority_queue<data>q;
    dis[src]=0;
    q.push(data(src, 0));
    while(!q.empty())
    {
        data u=q.top();
        q.pop();
        if(u.a==nd) return dis[nd];
        for(int i=0; i<adj[u.a].size(); i++)
        {
            int v=adj[u.a][i];
            //int c=max(dis[u.a], cost[u.a][i]);
            int c=dis[u.a]+cost[u.a][i];
            if(dis[v]>c)
            {
                dis[v]=c;
                q.push(data(v, dis[v]));
            }
        }
    }
    return -1;
}

int main()
{
    int tc;
    cin>>tc;
    for(int cs=1; cs<=tc; cs++)
    {
//        cin>>n>>m;
        scanf("%d%d", &n, &m);
        for(int i=0; i<m; i++)
        {
            int x,y,w;
//            cin>>x>>y>>w;
            scanf("%d%d%d", &x, &y, &w);
            adj[x].push_back(y);
            adj[y].push_back(x);
            cost[x].push_back(w);
            cost[y].push_back(w);
        }
        int nd;
        cin>>nd;
        printf("Case %d:\n", cs);
        for(int i=0; i<n; i++)
        {
            int t=dijkstra(i,nd);
            if(t<0) puts("Impossible");
            else printf("%d\n", t);
        }
        for(int i=0; i<N; i++) adj[i].clear(), cost[i].clear();
    }
    return 0;
}

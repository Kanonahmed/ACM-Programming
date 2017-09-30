#include<bits/stdc++.h>
using namespace std;
const int N=5005;
vector<int>graph[N],cost[N];
int dis[N];
struct data
{
    int a,b;
    data(int x,int y)
    {
        a=x;
        b=y;
    }
    bool friend operator <(data x,data y)
    {
        return x.b>y.b;
    }
};
int dijkstra(int st,int nd)
{
    priority_queue<data>q;
    memset(dis,63,sizeof dis);
    dis[st]=0;
    q.push(data(st,0));
    while(!q.empty())
    {
        data top=q.top();
        q.pop();
        if(top.a==nd)return dis[top.a];
        for(int i=0; i<graph[top.a].size(); i++)
        {
            int v=graph[top.a][i];
            int c=max(dis[top.a],cost[top.a][i]);
            if(dis[v]>c)
            {
                dis[v]=c;
                q.push(data(v,c));
            }
        }


    }
    return -1;
}
int main()
{
    int tc,t=1;
    cin>>tc;
    while(tc--)
    {
        for(int i=0; i<N; i++)
        {
            graph[i].clear();
            cost[i].clear();
        }
        int n,e;
        cin>>n>>e;
        for(int i=0; i<e; i++)
        {
            int x,y,w;
            cin>>x>>y>>w;
            graph[x].push_back(y);
            graph[y].push_back(x);
            cost[x].push_back(w);
            cost[y].push_back(w);
        }
        int nd;
        cin>>nd;
        cout<<"Case "<<t<<":"<<endl;
        for(int i=0; i<n; i++)
        {
            int t=dijkstra(i,nd);
            if(t==-1)cout<<"Impossible"<<endl;
            else
            cout<<t<<endl;
        }
        t++;
    }


    return 0;
}

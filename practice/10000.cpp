#include<bits/stdc++.h>
using namespace std;
const int N=102;
vector<int>graph[N];
queue<int>q;
int dis[N],vis[N];
int last;
int dijkstra(int src)
{
    q.push(src);
    dis[src]=0;
    last=src;
    int len=-1;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        if(dis[u]>len)
        {
            len=dis[u];
            last=u;
        }
        else if(dis[u]==len&&u<last)
        {
            last=u;
        }
        for(int i=0; i<graph[u].size(); i++)
        {
            int v=graph[u][i];
            if(dis[v]<dis[u]+1)
            {
                dis[v]=dis[u]+1;
                q.push(v);
            }
        }
    }
    return len;
}
int main()
{
    int n,tc=1;
    while(cin>>n&&n)
    {
        int st;
        cin>>st;
        int s,e;
        while(cin>>s>>e)
        {
            if(!s&&!e)break;
            graph[s].push_back(e);
        }
        int t=dijkstra(st);
        cout<<"Case "<<tc<<": The longest path from "<<st<<" has length "<<t<<", finishing at "<<last<<"."<<endl<<endl;
         tc++;
         for(int i=0;i<N;i++)graph[i].clear();
         memset(dis,0,sizeof dis);
    }


    return 0;
}

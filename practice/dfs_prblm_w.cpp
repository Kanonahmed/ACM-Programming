#include<bits/stdc++.h>
#define pp pair<int,int>
#define xx first
#define yy second
using namespace std;
const int N=30002;
vector<int>graph[N],cost[N];
int vis[N],dis[N],node,mx;
int bfs(int st,int w)
{
    vis[st]=1;
    queue<pp>q;
    q.push(pp(st,w));
    while(!q.empty())
    {

        pp top=q.front();
        q.pop();
        if(top.yy>mx)mx=top.yy;
        for(int i=0; i<graph[top.xx].size(); i++)
        {

            int v=graph[top.xx][i];
            int c=top.yy+cost[top.xx][i];
            if(!vis[v])
            {
                vis[v]=1;
                q.push(pp(v,c));
            }
        }
    }
    return mx;
}
int main()
{
    int tc,t=1;
    cin>>tc;
    while(tc--)
    {
      for(int i=0;i<N;i++){graph[i].clear();cost[i].clear();}
        int n;
        scanf("%d",&n);
        for(int i=0; i<n-1; i++)
        {
            int x,y,w;
            scanf("%d %d %d",&x,&y,&w);
            graph[x].push_back(y);
            graph[y].push_back(x);
            cost[x].push_back(w);
            cost[y].push_back(w);
        }
        printf("Case %d:\n",t);
        for(int i=0; i<n; i++)
        {
            memset(vis,0,sizeof vis);
            mx=-1;
            int t=bfs(i,0);
            printf("%d\n",t);
        }
        t++;
    }


    return 0;
}

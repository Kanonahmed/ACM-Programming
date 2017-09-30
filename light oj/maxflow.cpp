#include<bits/stdc++.h>
using namespace std;
int a[205][205],n,m,p[205];
vector<int>adj[205];
bool bfs(int s,int d)
{
    bool vis[205]={0};
    queue<int>q;
    vis[s]=1;
    q.push(s);
    while(!q.empty())
    {
        int u=q.front();q.pop();
        if(u==d)return true;
        for(int i=1;i<=201;i++)
        {
            if(!vis[i]&&a[u][i])
            {
                vis[i]=1;p[i]=u;q.push(i);
            }
        }
    }
    return false;
}
int go(int s,int d)
{
    int mx=0;
    while(bfs(s,d))
    {
        int mn=INT_MAX;
        for(int v=d;v!=s;v=p[v])mn=min(mn,a[p[v]][v]);
        for(int v=d;v!=s;v=p[v])
        {
            a[p[v]][v]-=mn;
            a[v][p[v]]+=mn;
        }
        mx+=mn;
    }
    return mx;
}
int main()
{
    int tc,ks=1;
    scanf("%d",&tc);
    while(tc--)
    {
        memset(a,0,sizeof a);
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            int x;
            scanf("%d",&x);
            a[i][i+100]=x;
        }
       scanf("%d",&m);
       for(int i=0;i<m;i++)
       {
           int x,y,c;
           scanf("%d %d %d",&x,&y,&c);
           a[x+100][y]+=c;
       }
       int s,d;
       scanf("%d %d",&s,&d);
       for(int i=0;i<s;i++)
       {
           int id;
           scanf("%d",&id);
           a[0][id]=99999999;
       }
       for(int i=0;i<d;i++)
       {
           int id;
           scanf("%d",&id);
           a[id+100][201]=99999999;
       }
       int res=go(0,201);
       printf("Case %d: %d\n",ks++,res);
    }


    return 0;
}

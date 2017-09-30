#include<bits/stdc++.h>
using namespace std;
vector<int>g[10005];
int rc[10005];
bool vis[10005];
void go(int u)
{
    vis[u]=1;
    for(int i=0;i<g[u].size();i++)
    {
        int v=g[u][i];
        if(!vis[v])
        {
            rc[v]++;
            go(v);
        }
    }
}
int main()
{
    int tc,ks=1;
    cin>>tc;
    while(tc--)
    {
        memset(rc,0,sizeof rc);
        for(int i=0;i<10005;i++)g[i].clear();
        int k,n,m,in[10005];
        scanf("%d %d %d",&k,&n,&m);
        for(int i=0;i<k;i++)
          {
              scanf("%d",&in[i]);
              rc[in[i]]++;
          }
          for(int i=0;i<m;i++)
          {
              int x,y;scanf("%d %d",&x,&y);
              g[x].push_back(y);
          }

        for(int i=0;i<k;i++)
        {
            memset(vis,0,sizeof vis);
            go(in[i]);
        }
       int cnt=0;
       for(int i=1;i<=n;i++)
        if(rc[i]==k)cnt++;
        printf("Case %d: %d\n",ks++,cnt);
    }



    return 0;
}

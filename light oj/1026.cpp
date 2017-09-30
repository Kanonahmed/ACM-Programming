#include<bits/stdc++.h>
using namespace std;
vector<pair<int ,int > >link;
vector<int>grd[100005];
int vis[100005],strt[100005],lo[100005],tim,p[100005];
void go(int u,int pr)
{
    vis[u]=1;
    int child=0;
    strt[u]=lo[u]=tim++;
    for(int i=0;i<grd[u].size();i++)
    {
        int v=grd[u][i];
        if(v==pr)continue;
        if(vis[v])lo[u]=min(lo[u],strt[v]);
        else
        {
            go(v,u);
            p[v]=u;
             lo[u]=min(lo[u],lo[v]);
             if(strt[u]<lo[v])link.push_back(make_pair(min(u,v),max(u,v)));
        }

    }
}
int main()
{
   int tc,ts=1;
   scanf("%d",&tc);
   while(tc--)
   {
       for(int i=0;i<100005;i++)grd[i].clear();
       link.clear();
       memset(vis,0,sizeof vis);
       int n;
       scanf("%d",&n);
       int tmp=n;
       while(tmp--)
       {
           int u,k;
           scanf("%d ",&u);
           getchar();
           scanf("%d ",&k);
           getchar();
           for(int i=0;i<k;i++)
           {
               int v;scanf("%d",&v);
               grd[u].push_back(v);
               grd[v].push_back(u);
           }
       }

       for(int i=0;i<n;i++)if(!vis[i])go(i,-1);

       sort(link.begin(),link.end());
        printf("Case %d:\n%d critical links\n",ts++,link.size());
       for(int i=0;i<link.size();i++)
       {
           printf("%d - %d\n",link[i].first,link[i].second);
       }
   }



    return 0;
}

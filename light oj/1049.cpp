#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> >ad[105];
bool vis[105];
int go(int u,int pr)
{
    int res=1000000000;
    for(int i=0;i<ad[u].size();i++)
    {
        int v=ad[u][i].first;
        if(v!=pr)
        {
            if(!vis[v]){vis[v]=1;res=min(res,ad[u][i].second+go(v,u));vis[v]=0;}
            else return ad[u][i].second;
        }
    }
    return res;
}
int main()
{
  int tc,ks=1;
  cin>>tc;
  while(tc--)
  {
      memset(vis,0,sizeof vis);
      for(int i=0;i<105;i++)ad[i].clear();
      int n;
      scanf("%d",&n);
      for(int i=0;i<n;i++)
      {
          int u,v,c;
          scanf("%d %d %d",&u,&v,&c);
          ad[u].push_back({v,0});
          ad[v].push_back({u,c});
      }
      vis[1]=1;
      int ans=go(1,-1);
      printf("Case %d: %d\n",ks++,ans);
  }




    return 0;
}

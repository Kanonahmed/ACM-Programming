#include<bits/stdc++.h>
using namespace std;
int n,dp[1003][3],par[1005];
vector<int>adj[1003];
int go(int u,int ys)
{
    int &rt=dp[u][ys];
    if(rt!=-1)return rt;
    rt=0;
    for(int i=0;i<adj[u].size();i++)
    {
        int v=adj[u][i];
        if(par[u]==v)continue;

        if(ys==0){
                par[v]=u;
            rt+=go(v,1)+1;
        }
        else
        {
            par[v]=u;
             rt+=min(go(v,1)+1,go(v,0));
        }
    }
    return rt;
}
int main()
{
 while(cin>>n&&n)
 {


     for(int i=1;i<=n;i++)par[i]=-1;
     for(int i=0;i<1003;i++)adj[i].clear();
       for(int i=1;i<=n;i++)
       {
           int x;
           cin>>x;
           for(int j=0;j<x;j++)
           {
               int y;
               cin>>y;
               adj[i].push_back(y);
           }
       }
       if(n==1){cout<<n<<endl;continue;}
       memset(dp,-1,sizeof dp);
       int ans=min(go(1,1)+1,go(1,0));
       cout<<ans<<endl;
 }

    return 0;
}

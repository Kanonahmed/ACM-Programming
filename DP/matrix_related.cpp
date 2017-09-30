#include<bits/stdc++.h>
#define LL long long
using namespace std;
int dp[2050][2050];
LL a[2050];
int go(int l,int r)
{
    int &rt=dp[l][r];
    if(rt!=-1)return rt;
    rt=0;
    for(int i=l;i<r;i++)
    {
         if((a[i]-a[l-1])==(a[r]-a[i]))rt=max(rt,max(go(l,i),go(i+1,r))+1);
    }
    return rt;
}
int main()
{
  int tc,ks=1;
  cin>>tc;
  while(tc--)
  {
       int n;
       scanf("%d",&n);
       a[0]=0;
       for(int i=1;i<=n;i++)
       {
           scanf("%lld",&a[i]);
           a[i]+=a[i-1];
       }
    memset(dp,-1,sizeof dp);

    int ans=go(1,n);
    printf("%d\n",ans);
  }



    return 0;
}

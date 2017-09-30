#include<bits/stdc++.h>
using namespace std;
int a[103];
int dp[102][102],vis[102][102];
int go(int l,int r)
{
    if(l>r)return 0;
    if(vis[l][r])return dp[l][r];
    dp[l][r]=-(1<<30);
    vis[l][r]=1;
    int sum=0;
    for(int i=l;i<=r;i++)
    {
        sum+=a[i];
        dp[l][r]=max(dp[l][r],sum-go(i+1,r));
    }
    sum=0;
    for(int j=r;j>=l;j--)
    {
        sum+=a[j];
        dp[l][r]=max(dp[l][r],sum-go(l,j-1));
    }

    return dp[l][r];
}
int main()
{
  int tc,ks=1,n;
  while(cin>>n&&n)
   {
       memset(vis,0,sizeof vis);
     for(int i=0;i<n;i++)cin>>a[i];
     int ans=go(0,n-1);
     cout<<ans<<endl;
   }

    return 0;
}

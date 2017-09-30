#include<bits/stdc++.h>
using namespace std;
int dp[2002][2002];
int a[2002],n,k;
int go(int p,int tk)
{
    if(p==n)return tk;
    int &rt=dp[p][tk];
    if(rt!=-1)return rt;
    rt=0;
    if(tk+a[p]<=k)rt=max(rt,go(p,tk+a[p]));
    rt=max(rt,go(p+1,tk));
    return rt;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
  cin>>n>>k;
  for(int i=0;i<n;i++)cin>>a[i];
  memset(dp,-1,sizeof dp);
  cout<<go(0,0)<<endl;
    }
    return 0;
}

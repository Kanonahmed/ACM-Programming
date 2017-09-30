#include<bits/stdc++.h>
using namespace std;
char a[1005],b[1005];
int n,m,k,dp[1005][1005][12][2];
int go(int i,int j,int d,int flag)
{
    if(!d)return 0;
    if(i==n||j==m)return 0;
    int &ret=dp[i][j][d][flag];
    if(ret!=-1)return ret;
    ret=0;
    if(a[i]==b[j])ret=max(ret,1+go(i+1,j+1,d,1));
        ret=max(ret,go(i+1,j,d-flag,0));
        ret=max(ret,go(i,j+1,d-flag,0));
    return ret;
}
int main()
{
  scanf("%d %d %d",&n,&m,&k);
  scanf("%s",a);
  scanf("%s",b);
  memset(dp,-1,sizeof dp);
  int res=go(0,0,k,0);
   cout<<res<<endl;
    return 0;
}

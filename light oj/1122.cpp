#include<bits/stdc++.h>
using namespace std;
int n,m,a[15];
int dp[15][15];
int go(int cnt,int p)
{
    if(cnt==m)
     return 1;
     if(dp[cnt][p]!=-1)return dp[cnt][p];
     int ret=0;
     for(int i=1;i<=n;i++)
         if(abs(a[p]-a[i])<=2)
            ret+=go(cnt+1,i);
     return dp[cnt][p]=ret;
}
int main()
{
    int tc,tt=1;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>m;
        for(int i=1;i<=n;i++)cin>>a[i];
        memset(dp,-1,sizeof dp);
        int ans=0;
        for(int i=1;i<=n;i++)
            ans+=go(1,i);
        printf("Case %d: %d\n",tt++,ans);
    }



    return 0;
}

#include<bits/stdc++.h>
using namespace std;
const int M=100000007;
int n,k,a[105];
int dp[10004];
//int go(int p,int tk)
//{
//    if(p>=n)
//    {
//        if(tk==0)return 1;
//        else return 0;
//    }
//    int &ret=dp[p][tk];
//    if(ret!=-1)return ret;
//    ret=0;
//    for(int i=0;i<=k;i++)
//    {
//        if(tk-a[p]*i>=0)ret+=go(p+1,tk-a[p]*i);
//    }
//    return ret%M;
//}
int main()
{
    int tc,ks=1;
    cin>>tc;
    while(tc--)
    {
        scanf("%d %d",&n,&k);
        for(int i=0;i<n;i++)scanf("%d",&a[i]);
        memset(dp,0,sizeof dp);
        //int res=go(0,k);
        dp[0]=1;
        for(int i=0;i<n;i++)
            for(int j=1;j<=k;j++)
              if(j>=a[i])
                {
                   dp[j]+=dp[j-a[i]];
                   dp[j]%=M;
                }
        printf("Case %d: %d\n",ks++,dp[k]);
    }

    return 0;
}

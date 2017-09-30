#include<bits/stdc++.h>
#define LL long long
using namespace std;
const LL MD=10000000000007;
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        LL n,l,m,dp[10002],ans=0;
        cin>>n>>l>>m;
        dp[n*n+1]=1;
        for(LL j=n*n;j>=1;j--)
            dp[j]=(dp[j+1]*j)%MD;

            for(int k=l;k<=m;k++)
            {
                ans=(ans+dp[n*n-k+1])%MD;
            }
            cout<<"Case "<<i<<": "<<ans<<endl;
    }


    return 0;
}

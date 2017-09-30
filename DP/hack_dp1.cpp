#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL a[50005],n,dp[50005];
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
            memset(dp,0,sizeof dp);
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=n-1;i>=0;i--)
        dp[i]=max(dp[i+1],a[i]);
    LL sum=0;
    for(int i=0;i<n;i++)
    {
        if(dp[i]>a[i])sum+=dp[i]-a[i];
    }

   cout<<sum<<endl;

  }

}

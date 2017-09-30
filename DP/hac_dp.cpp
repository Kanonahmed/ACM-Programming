#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
      int n;
    cin>>n;
    LL a[100005],dp[100005];
    for(int i=1;i<=n;i++)cin>>a[i];
     sort(a+1,a+n+1);
     dp[0]=0;
     for(int i=1;i<=n;i++)
        dp[i]=dp[i-1]+a[i];
    LL ans=0;
    for(int i=1;i<=n;i++)
    {
        ans=max(ans,(dp[n]-dp[i-1])*i);
    }
   cout<<ans<<endl;

  }


    return 0;
}

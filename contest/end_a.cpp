#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL dp[15];
int main()
{
dp[0]=1;
for(int i=1;i<=10;i++)dp[i]=dp[i-1]*(LL)i;
//for(int i=0;i<=10;i++)cout<<dp[i]<<" ";
//cout<<endl;
 int n,m,c;
 cin>>n>>m>>c;
 int tt=n+m-c;

  cout<<ans<<endl;
    return 0;
}

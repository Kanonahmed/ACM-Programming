#include<bits/stdc++.h>
using namespace std;
int dp[100][10000];
int n,w;
int wight[1000],val[1000];
int main()
{
   cin>>n;
   for(int i=1;i<=n;i++)
    cin>>wight[i]>>val[i];
    cin>>w;
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=w;j++)
       {
           if(j>=wight[i])
           {
               dp[i][j]=max(dp[i-1][j],val[i]+dp[i-1][j-wight[i]]);
           }
           else
            dp[i][j]=dp[i-1][j];
         //  cout<<dp[i][j]<<" ";
       }
      // cout<<endl;
   }
   cout<<dp[n][w]<<endl;

    return 0;
}

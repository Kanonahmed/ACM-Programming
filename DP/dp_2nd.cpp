#include<bits/stdc++.h>
using namespace std;
int dp[20][20];
int binomial(int n,int r)
{
    if(r==0)return 1;
    if(n==r) return 1;
    if(dp[n][r]!=-1)return dp[n][r];
    else
    {
        dp[n][r]=binomial(n-1,r)+binomial(n-1,r-1);
        return dp[n][r];
    }
}
int main()
{
    memset(dp,-1,sizeof dp);
  int n,r;
  cin>>n>>r;
  int t=binomial(n,r);
  cout<<t<<endl;

    return 0;
}

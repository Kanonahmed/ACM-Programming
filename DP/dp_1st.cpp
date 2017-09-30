#include<bits/stdc++.h>
using namespace std;
int dp[25];
int fabonachi(int n)
{
    if(n==0)return 0;
    if(n==1)return 1;
    if(dp[n]!=-1) return dp[n]; //return pre-calculated value;
    else
    {
        dp[n]=fabonachi(n-1)+fabonachi(n-2); // save calculated value in n position;
        return dp[n];
    }
}
int main()
{
    memset(dp,-1,sizeof dp);
    int n;
    cin>>n;
    int t=fabonachi(n);
    cout<<t<<endl;
    return 0;
}

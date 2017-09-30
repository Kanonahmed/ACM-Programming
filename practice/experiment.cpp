#include<bits/stdc++.h>
using namespace std;
int dp[100][100];
int cell,color;
int go(int p,int sum)
{
    if(p==cell)
    {
        //cout<<sum<<endl;
        if(sum%color==0)return 1;
        else return 0;
    }
    if(dp[p][sum]!=-1)return dp[p][sum];
    dp[p][sum]=0;
    for(int i=0;i<color;i++)
    {
        dp[p][sum]=dp[p][sum]+go(p+1,sum+i);
    }
    return dp[p][sum];
}
int main()
{
    memset(dp,-1,sizeof dp);
   cin>>cell>>color;
   cout<<go(0,0)<<endl;


    return 0;
}

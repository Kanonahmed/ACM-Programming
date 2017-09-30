#include<bits/stdc++.h>
#define ll long long
using namespace std;
int coin[22];
ll dp[22][10002];
ll change(int i,int taka)
{
    if(i>=21)
    {
        if(taka==0)return 1;
        else return 0;
    }
    if(dp[i][taka]!=-1)return dp[i][taka];
    ll r1=0,r2=0;
    if(taka-coin[i]>=0)
     r1=change(i,taka-coin[i]);

    r2=change(i+1,taka);

    dp[i][taka]=r1+r2;

    return dp[i][taka];
}
int main()
{
    for(int i=1; i<=21; i++)
    {
        coin[i-1]=i*i*i;
    }
    int taka;
    memset(dp,-1,sizeof dp);
    while(cin>>taka)
    {
     cout<<change(0,taka)<<endl;
    }
    return 0;
}

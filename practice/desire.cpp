#include<bits/stdc++.h>
using namespace std;
int dp[1005];
int go(int num,int sz)
{
    int &ret=dp[num];
    if(ret!=-1)return ret;
    if(num<=sz)return 1;
    ret=0;
    ret=go(num/2,sz)+go((num+1)/2,sz);
    return ret;
}
int main()
{
    int n,c;
    cin>>n>>c;
    memset(dp,-1,sizeof dp);
    cout<<go(n,c)<<endl;



}

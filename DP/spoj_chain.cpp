#include<bits/stdc++.h>
using namespace std;
int c[105],csum[105],n,dp[105][105];
int bal(int b,int e)
{
    return (csum[e]-csum[b-1])%100;
}
int go(int i,int j)
{
    if(i==j)return 0;
    int &rp=dp[i][j];
    if(rp!=-1)return rp;
    rp=900000000;
    for(int m=i;m<=j;m++)
    {
        rp=min(rp,bal(i,m)*bal(m+1,j)+go(i,m)+go(m+1,j));
    }
    return rp;
}
int main()
{

   while(cin>>n)
   {
       for(int i=1;i<=n;i++){cin>>c[i];csum[i]=csum[i-1]+c[i];}
         memset(dp,-1,sizeof dp);
        int rp=go(1,n);
        cout<<rp<<endl;
   }


    return 0;
}

#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL n,r[1000],c[1000],dp[1000][1000];
LL go(int b,int e)
{
    if(b>=e)return 0;
    LL &rep=dp[b][e];
    if(rep!=-1)return rep;
    rep=1<<30;
    for(int m=b;m<=e;m++)
    {
        //LL l=go(b,m);
        //LL rr=go(m+1,e);
        //LL mul=l+rr
        rep=min(rep,r[b]*c[m]*c[e]+go(b,m)+go(m+1,e));
    }
    return rep;
}
int main()
{
   cin>>n;
   for(int i=1;i<=n;i++)cin>>r[i]>>c[i];
   memset(dp,-1,sizeof dp);
   LL r=go(1,n);
   cout<<r<<endl;



    return 0;
}

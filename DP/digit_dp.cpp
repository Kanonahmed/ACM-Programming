#include<bits/stdc++.h>
#define LL long long
using namespace std;
int n,k;
LL dp[80][80][105];
LL pw(int p)
{
    LL res=1;
    for(int i=1;i<=p;i++)res*=2;
    return res;
}
LL go(int p,int on,int zero,LL md)
{
    if(p<0)
    {
        if(md==0&&on==zero)return 1;
        else return 0;
    }
    if(dp[p][on][md]!=-1)return dp[p][on][md];
    dp[p][on][md]=0;
    dp[p][on][md]+=go(p-1,on+1,zero,(md+pw(p)%(LL)k)%(LL)k);
    dp[p][on][md]+=go(p-1,on,zero+1,md%(LL)k);
    return dp[p][on][md];
}
int main()
{
   int tc,ks=1;
   cin>>tc;
   while(tc--)
   {
        n,k;
       cin>>n>>k;
       memset(dp,-1,sizeof dp);
     LL ret=0;
     if(k)
     ret=go(n-2,1,0,(pw(n-1))%(LL)k);
     cout<<"Case "<<ks++<<": "<<ret<<endl;
   }
    return 0;
}

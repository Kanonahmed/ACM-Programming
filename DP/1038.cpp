#include<bits/stdc++.h>
using namespace std;
int n;
double dp[100005];
double go(int x)
{
    if(dp[x]){
    int m=sqrt(x);
    int cn=2;
    double s=0;
    for(int i=2;i<=m;i++)
    {
        if(x%i==0)
        {
            s+=go(x/i);
            cn++;
            if(i!=x/i){s+=go(i);cn++;}
        }
    }
    s/=(cn-1);
    s+=cn*1.0/(cn-1);
    dp[x]=s;
    }
    return dp[x];
}
int main()
{
   int tc,ks=1;
   scanf("%d",&tc);
   while(tc--)
   {

       scanf("%d",&n);
       memset(dp,-1,sizeof dp);
       dp[1]=0;
       double res=go(n);
       printf("Case %d: %0.7f\n",ks++,res);
   }



    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int a[105],n,dp[105][105];
int go(int i,int j)
{
    //cout<<i<<" "<<j<<endl;
        //getchar();
    if(dp[i][j]!=-1)return dp[i][j];
    if(i>j)return 0;
    int sum=0,mx=-INFINITY;
    for(int k=i;k<=j;k++)
    {
        sum+=a[k];
        mx=max(mx,sum-go(k+1,j));
    }

    sum=0;
    for(int k=j;k>=i;k--)
    {
        sum+=a[k];
        mx=max(mx,sum-go(i,k-1));
    }
    return dp[i][j]=mx;
}
int main()
{
   int tc,ks=1;
   cin>>tc;
   while(tc--)
   {
     cin>>n;
     for(int i=1;i<=n;i++)cin>>a[i];
      memset(dp,-1,sizeof dp);
     int res=go(1,n);
     printf("Case %d: %d\n",ks++,res);

   }


    return 0;
}

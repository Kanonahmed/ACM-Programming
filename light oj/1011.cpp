#include<bits/stdc++.h>
using namespace std;
int n,a[18][18],dp[20][1<<17];
int go(int p,int mask)
{
    if(p==n)return 0;

    int &ptr=dp[p][mask];
    if(ptr!=-1)return ptr;

    ptr=0;
    for(int i=0;i<n;i++)
    {
        if((mask&(1<<i))==0)
        {
            ptr=max(ptr,a[p][i]+go(p+1,mask|(1<<i)));
        }
    }
    return ptr;
}
int main()
{
   int tc,ks=1;
   cin>>tc;
   while(tc--)
   {
     cin>>n;
     for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)cin>>a[i][j];

       memset(dp,-1,sizeof dp);

     int r=go(0,0);
     cout<<"Case "<<ks++<<": "<<r<<endl;
   }

    return 0;
}

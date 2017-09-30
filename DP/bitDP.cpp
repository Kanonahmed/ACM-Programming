#include<bits/stdc++.h>
using namespace std;
int sett(int n,int pos){return n=n|(1<<pos);}
int reset(int n,int pos){return n=n&~(1<<pos);}
bool check(int n,int pos){return (bool)(n&(1<<pos));}
int dp[1<<15+10];
int a[17][17];
int n;
int DP(int mask)
{
    if(mask==(1<<n)-1)return 0;
    int &ptr=dp[mask];
    if(dp[mask]!=-1)return dp[mask];
    int ans=1<<15;
    for(int i=0;i<n;i++)
    {
        if(check(mask,i)==0)  //jdi na niye thaki thle nibo
        {
            int price=a[i][i];
            for(int j=0;j<n;j++)
            {
                if(i!=j&&check(mask,j)==1) // je jula niyechhi segular value add krbo
                {
                    price+=a[i][j];
                }
            }
            int r=price+DP(sett(mask,i));
            ans=min(ans,r);
        }
    }
    ptr=ans;
    return ptr;
}
int main()
{
   cin>>n;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)cin>>a[i][j];
   }
  memset(dp,-1,sizeof dp);
  cout<<DP(0)<<endl;

    return 0;
}

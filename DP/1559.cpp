#include<bits/stdc++.h>
using namespace std;
int dp[22][1<<13],n,s,mx[22];
bool go(int p,int stones)
{
       if(stones==0)return 1;
      int &ret=dp[p][stones];
      if(ret!=-1)return ret;
      ret=0;
      for(int i=1;i<=mx[p]&&i<=stones;i++)
      {
           if(!go((p+1)%(2*n),stones-i))ret=1;
      }
      return ret;
}
int main()
{
  while(cin>>n&&n)
  {
      cin>>s;
      for(int i=0;i<2*n;i++)cin>>mx[i];
      memset(dp,-1,sizeof dp);
      if(go(0,s))cout<<"1"<<endl;
      else cout<<"0"<<endl;
  }



    return 0;
}

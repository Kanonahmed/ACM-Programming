#include<bits/stdc++.h>
using namespace std;
int dp[55],n;
bool vis[1000006];
int go(int nn)
{
    if(nn==0)return 1;
    int &rt=dp[nn];
    if(rt!=-1)return rt;
    rt=0;
    if(nn-1>=0)rt=go(nn-1);
    if(nn-4>=0)rt+=go(nn-4);
    return rt;
}
int main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
      cin>>n;
      memset(dp,-1,sizeof dp);
      int np=go(n);
      //cout<<np<<endl;
      memset(vis,0,sizeof vis);
      int cnt=0;
      if(np>=2)cnt++;
      for(int i=3;i<=np;i+=2)
      {
          if(!vis[i])
          {
              cnt++;
              for(int j=2*i;j<=np;j+=i)vis[j]=1;
          }
      }
      cout<<cnt<<endl;
  }



    return 0;
}

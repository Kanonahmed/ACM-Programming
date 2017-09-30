#include<bits/stdc++.h>
using namespace std;
int dp[15][15],n;
string s,s1;
int go(int x,int y)
{
    if(x>n||y>n)return 0;
    if(x==n&&y==n)return 1;
    int &rt=dp[x][y];
    if(rt!=-1)return rt;
    rt=0;
    if(s[x]=='1')rt=go(x+1,y);
    else if(s1[y]=='1')rt=go(x,y+1);
    else
    {
        if(x==y)
            rt|=go(x+1,y+1);
        if(x-1==y)
            rt|=go(x+1,y+1);
        if(s[x+1]=='0')
            rt|=go(x+2,y);
        if(s1[y+1]=='0')
            rt|=go(x,y+2);
    }
    return rt;
}
int main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
      cin>>n>>s>>s1;
      memset(dp,-1,sizeof dp);
      int ans=go(0,0);
      if(ans)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
  }



    return 0;
}

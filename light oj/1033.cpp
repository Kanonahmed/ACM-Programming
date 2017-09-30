#include<bits/stdc++.h>
using namespace std;
int dp[102][102];
string s;
int go(int p,int q)
{
    if(p>=q)return 0;

    int &ret=dp[p][q];
    if(ret!=-1)return ret;

    ret=1000000000;
    if(s[p]==s[q])ret=min(ret,go(p+1,q-1));
    else
    {
        ret=min(ret,1+go(p+1,q));
        ret=min(ret,1+go(p,q-1));
    }
    return ret;
}
int main()
{

   int tc,ks=1;
   cin>>tc;
   while(tc--)
   {
      cin>>s;
      int len=s.size();
      memset(dp,-1,sizeof dp);
      int res=go(0,len-1);
      printf("Case %d: %d\n",ks++,res);
   }
    return 0;
}

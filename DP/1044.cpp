#include<bits/stdc++.h>
using namespace std;
string s;
int l,dp[1005];
bool yes(int i,int j)
{
    while(i<j)
    {
        if(s[i]!=s[j])return false;
        i++,j--;
    }
    return true;
}
int go(int pos)
{
    if(pos>=l)return 0;
    int &ret=dp[pos];
    if(ret!=-1)return ret;
    ret=1000000000;
    for(int i=pos;i<l;i++)
    {
        if(yes(pos,i))
            ret=min(ret,go(i+1));
    }
    return ++ret;
}
int main()
{
   int tc,ks=1;
   cin>>tc;
   while(tc--)
   {
       cin>>s;
       l=s.size();
       memset(dp,-1,sizeof dp);
       int rr=go(0);
       printf("Case %d: %d\n",ks++,rr);
   }



}

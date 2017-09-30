#include<bits/stdc++.h>
#define LL long long
using namespace std;
int a[52],n,m;
LL dp[52][255];
LL go(int pos,int tk)
{
    if(pos==n)
    {
        if(tk==0)return 1LL;
        return 0LL;
    }
    LL &rt=dp[pos][tk];
    if(rt!=-1)return rt;
    rt=0;
    if(tk-a[pos]>=0)rt+=go(pos,tk-a[pos]);
    rt+=go(pos+1,tk);
    return rt;

}
int main()
{
 cin>>m>>n;
 for(int i=0;i<n;i++)cin>>a[i];
  memset(dp,-1,sizeof dp);
  cout<<go(0,m)<<endl;


    return 0;
}

#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL dp[50][5];
int n;
LL go(int p,int cr)
{
    if(p==n)return 0;
    LL &rt=dp[r][p][cr];
    if(rt!=-1)return rt;
    rt=0;
    for(int i=0;i<3;i++)
    {
           rt+=1+go(p+1,i);

    }
    return rt;
}
int main()
{
  cin>>n;
  memset(dp,-1,sizeof dp);
  cout<<go(0,5)<<endl;



    return 0;
}

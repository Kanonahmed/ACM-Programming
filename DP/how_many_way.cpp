#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL dp[1005][1005];
int grid[1005][1005];
const LL M=1000000007;
LL go(int r,int c)
{
    if(grid[r][c])return dp[r][c]=0LL;
    if(r==1&&c==1){
            if(grid[r][c])return 0LL;
            return 1LL;
            }
    LL &rt=dp[r][c];
    if(rt!=-1)return rt;
    rt=0LL;
    if(r>1&&grid[r-1][c]==0)
    rt+=go(r-1,c)%M;
    if(c>1&&grid[r][c-1]==0)
    rt+=go(r,c-1)%M;
    return rt%M;
}
int main()
{

  memset(dp,-1,sizeof dp);
  int x,y,q;
  cin>>x>>y>>q;
  for(int i=0;i<q;i++)
  {
      int a,b;cin>>a>>b;grid[a][b]=1;
  }
  cout<<go(x,y)<<endl;

    return 0;
}

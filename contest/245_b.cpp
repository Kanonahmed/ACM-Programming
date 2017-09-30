#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL dp[4][1002][1002],work[1002][1002];
int n,m;
LL go(int r,int c)
{
    if(r==n&&c==m)return dp[0][r][c]=work[r][c];
    LL &rt=dp[0][r][c];
    if(rt!=-1)return rt;
    rt=0;
    if(r<n)
        rt=work[r][c]+go(r+1,c);
    if(c<m)
        rt=max(rt,work[r][c]+go(r,c+1));
    return rt;
}

LL go1(int r,int c)
{
    if(r==1&&c==1)return dp[1][r][c]=work[r][c];
    LL &rt=dp[1][r][c];
    if(rt!=-1)return rt;
    rt=0;
    if(r>1)
    rt=work[r][c]+go1(r-1,c);
    if(c>1)
        rt=max(rt,work[r][c]+go1(r,c-1));

    return rt;
}

LL go2(int r,int c)
{
    //cout<<r<<" "<<c<<endl;
    if(r==1&&c==m)return dp[2][r][c]=work[r][c];
    LL &rt=dp[2][r][c];
    if(rt!=-1)return rt;
    rt=0;
    if(r>1)
        rt=work[r][c]+go2(r-1,c);
    if(c<m)
        rt=max(rt,work[r][c]+go2(r,c+1));
    return rt;
}

LL go3(int r,int c)
{
    if(r==n&&c==1)return dp[3][r][c]=work[r][c];

    LL &rt=dp[3][r][c];
    if(rt!=-1)return rt;
    rt=0;
    if(r<n)
        rt=work[r][c]+go3(r+1,c);
    if(c>1)
        rt=max(rt,work[r][c]+go3(r,c-1));
    return rt;
}
int main()
{

   cin>>n>>m;
   for(int i=1;i<=n;i++)
       for(int j=1;j<=m;j++)cin>>work[i][j];
    memset(dp,-1,sizeof dp);
    go(1,1);
    go1(n,m);
    go2(n,1);
    go3(1,m);

    //cout<<dp[0][1][1]<<" "<<dp[1][n][m]<<endl;

    //cout<<dp[2][n][1]<<" "<<dp[3][1][m]<<endl;

   LL mx=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
    {
        if(i-1>=1 && i+1<=n && j-1>=1 && j+1<=m ){
          mx=max(mx,dp[0][i+1][j]+dp[1][i-1][j]+dp[2][i][j+1]+dp[3][i][j-1]);
          mx=max(mx,dp[2][i-1][j]+dp[3][i+1][j]+dp[0][i][j+1]+dp[2][i][j-1]);
        }
    }
    cout<<mx<<endl;
    return 0;
}

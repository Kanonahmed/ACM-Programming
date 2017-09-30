#include<iostream>
#include<algorithm>
#include<cctype>
#include<cmath>
#include<utility>
#include<fstream>
#include<sstream>
#include<cstdlib>
#include<cstring>
#include<iomanip>
#define LL long long
using namespace std;
LL a[55][55],nd[105],dp[105][55],n,m;
LL go(int p,int age)
{
    if(p>n)return 0;
     LL &ret=dp[p][age];
     if(ret!=-1)return ret;
     ret=0;
    if(nd[p]==-1)
    {
        for(int i=1;i<=m;i++)
            ret=max(ret,a[age][i]+go(p+1,i));
    }
    else
        ret=max(ret,a[age][nd[p]]+go(p+1,nd[p]));
    return ret;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
    cin>>n>>m;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=m;j++)cin>>a[i][j];
    for(int i=1;i<=n;i++)cin>>nd[i];
    memset(dp,-1,sizeof dp);
    LL res=go(1,0);
    cout<<res<<endl;
    }
    return 0;
}

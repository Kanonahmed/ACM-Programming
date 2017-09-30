#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[105];
int b[105];
int DP[105][105];
int lcs(int i,int j)
{
    if(i>=n||j>=m)return 0;
    if(DP[i][j]!=-1)return DP[i][j];
    int ans=0;
    if(a[i]==b[j])ans=1+lcs(i+1,j+1);
    else{
        int r1=lcs(i,j+1);
        int r2=lcs(i+1,j);
        ans=max(r1,r2);
       }
       DP[i][j]=ans;
    return DP[i][j];
}
int main()
{
    int t=1;
    while(cin>>n>>m)
    {
        if(n==0&&m==0)break;
        for(int i=0; i<n; i++)scanf("%d",&a[i]);
        for(int j=0; j<m; j++)scanf("%d",&b[j]);
        memset(DP,-1,sizeof DP);
        int cs=lcs(0,0);
        printf("Twin Towers #%d\n",t);
        printf("Number of Tiles : %d\n\n",cs);
        t++;
    }


    return 0;
}

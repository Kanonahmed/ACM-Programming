#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int p[1005];
int ww[1005];
int sum,n;
int DP(int pos,int w)
{
    if(pos==n)return 0;
    if(dp[pos][w]!=-1)return dp[pos][w];
    int profit1=0,profit2=0;
    if(w+ww[pos]<=sum)
    profit1=p[pos]+DP(pos+1,w+ww[pos]);
    profit2=DP(pos+1,w);
    dp[pos][w]=max(profit1,profit2);
    return dp[pos][w];
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>p[i]>>ww[i];
        }
        int g;
        cin>>g;
        int res=0;
        for(int i=0; i<g; i++)
        {
            memset(dp,-1,sizeof dp);
            cin>>sum;
            res+=DP(0,0);
        }

        cout<<res<<endl;
    }


    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int coin[52],num[52];
int n,k;
int dp[51][1002];
const int mod=100000007;
int change(int i,int taka)
{
    if(i>=n)
    {
        if(taka==k)return 1;
        else return 0;
    }
    int &ptr=dp[i][taka];
    if(ptr!=-1)return ptr;
    ptr=0;
    for(int c=0;c<=num[i]; c++)
    {
        if(taka+coin[i]*c<=k)
        {
            ptr=(ptr%mod+change(i+1,taka+coin[i]*c)%mod)%mod;
        }
    }
    return ptr;
}
int main()
{
    int tc,t=1;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>k;
        memset(dp,-1,sizeof dp);
        for(int i=0; i<n; i++)
            cin>>coin[i];
        for(int i=0; i<n; i++)
            cin>>num[i];
        memset(dp,-1,sizeof dp);
        cout<<"Case "<<t<<": "<<change(0,0)<<endl;
        t++;
    }


    return 0;
}

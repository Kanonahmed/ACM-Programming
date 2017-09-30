#include<bits/stdc++.h>
using namespace std;
string s;
int x,y;
int dp[100005];
int DP(int i)
{
    if(i-1<0)return 0;
    int &ptr=dp[i];
    if(ptr!=-1)return ptr;
    ptr=0;
    if(s[i]==s[i-1])ptr=1+DP(i-1);
    else ptr=max(ptr,DP(i-1));
    return ptr;
}
int main()
{
    cin>>s;
    int q;
    memset(dp,-1,sizeof dp);
    DP(s.size()-1);
    dp[0]=0;
    cin>>q;
    while(q--)
    {
        cin>>x>>y;
        x--;
        y--;
        cout<<dp[y]-dp[x]<<endl;
    }
    return 0;
}

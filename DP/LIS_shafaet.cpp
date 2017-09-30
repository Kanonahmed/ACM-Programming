#include<bits/stdc++.h>
using namespace std;
int a[10000],n;
int dp[10000];
int dir[10000];
int lis(int u)
{
    if(u>=n)return 0;
    if(dp[u]!=-1)return dp[u];
    int mx=0;
    for(int j=u+1; j<n; j++)
    {
        if(a[j]>a[u])
        {
            if(lis(j)>mx)
            {
                mx=lis(j);
                dir[u]=j;
            }
        }
    }
    dp[u]=1+mx;
    return dp[u];
}
void print(int st)
{
    if(dir[st]==-1)
    {
        cout<<a[st]<<endl;
        return ;
    }
    cout<<a[st]<<endl;
    print(dir[st]);
}
int main()
{
    cin>>n;
    for(int i=0; i<n; i++)cin>>a[i];
    memset(dp,-1,sizeof dp);
    memset(dir,-1,sizeof dir);
    int best=0;
    int st;
    for(int i=0; i<n; i++)
    {
        int t=lis(i);
        if(best<t)
        {
            st=i;
            best=t;
        }
    }
    print(st);
    return 0;
}

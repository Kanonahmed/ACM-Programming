#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1000],b[1000];
int DP[1000][1000];
int dp(int i,int j)
{
    if(i==n||j==m)return 0;
    int &ptr=DP[i][j];
    if(ptr!=-1)return ptr;
   // ptr=max(dp(i+1,j),dp(i,j+1));
   ptr=0;
    if(abs(a[i]-b[j])<2)
    {
        ptr=max(ptr,dp(i+1,j+1)+1);
    }
    ptr=max(ptr,dp(i+1,j));
    ptr=max(ptr,dp(i,j+1));
    return ptr;
}
int main()
{
    memset(DP,-1,sizeof DP);

    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>m;
    for(int i=0;i<m;i++)cin>>b[i];
   sort(a,a+n);
    sort(b,b+m);
  cout<<dp(0,0)<<endl;
//  for(int i=0;i<n;i++)
//  {
//      for(int j=0;j<m;j++)cout<<DP[i][j]<<" ";
//      cout<<endl;
//  }
    return 0;
}

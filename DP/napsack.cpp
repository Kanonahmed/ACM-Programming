#include<bits/stdc++.h>
using namespace std;
int wight[1000],n,cap;
int cost[1000];
int dp[1000][1000];
int result(int i,int w)
{
    getchar();
   // cout<<i<<" "<<w<<endl;
     if(i==n+1)return 0;

     if(dp[i][w]=!-1)return dp[i][w];

     int profit1=0,profit2=0;
     if(w+wight[i]<=cap)
     profit1=cost[i]+result(i+1,w+wight[i]);
//getchar();
    //  cout<<profit1<<" "<<profit2<<endl;
     profit2=result(i+1,w);
     getchar();
     cout<<"profit "<<profit1<<" "<<profit2<<endl;
     dp[i][w]=max(profit1,profit2);
     return dp[i][w];
}
int main()
{
    memset(dp,-1,sizeof dp);
  cin>>n>>cap;
  for(int i=1;i<=n;i++)
  {
      cin>>wight[i]>>cost[i];
  }
  //result(1,0);
  cout<<result(1,0)<<endl;
  for(int j=1;j<=n;j++){
  for(int i=0;i<=cap;i++)printf("%3d ",dp[j][i]);
  cout<<endl;
  }

    return 0;
}

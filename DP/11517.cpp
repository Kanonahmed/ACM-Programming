#include<bits/stdc++.h>
using namespace std;
vector<int>coin;
int taka,n;
int DP[101][10001];
const int inf=100000;
int direction[101][10001];
int change(int pos,int t)
{
    if(pos>=n)
    {
        if(t==taka)return 0;
        else return inf;
    }
    if(t>taka)return inf;
    if(DP[pos][t]!=-1)return DP[pos][t];
    int r1=inf,r2=inf;
   // if(t+coin[pos]<=taka)
    r1=change(pos,t+coin[pos])+1;
    r2=change(pos+1,t);
    if(r1<r2)
    {
        direction[pos][t]=1;
    }
    else direction[pos][t]=0;
    DP[pos][t]=min(r1,r2);
    return DP[pos][t];
}
int main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
      cin>>taka;
      cin>>n;
      for(int i=0;i<n;i++)
      {
          int x;
          cin>>x;
          coin.push_back(x);

      }
      memset(DP,-1,sizeof DP);
      cout<<change(0,0)<<endl;
  }

    return 0;
}

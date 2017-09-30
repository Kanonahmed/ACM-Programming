#include<bits/stdc++.h>
using namespace std;
int n,w,k,ay[105],dp[105][105];
int go(int p,int cnt)
{
    if(p>=n||cnt==0)return 0;
    int &ret=dp[p][cnt];
    if(ret!=-1)return ret;
    int i,vl;
    vl=ay[p]+w;
    ret=0;
    for(i=p;i<n&&ay[i]<=vl;i++)ret++;
    ret+=go(i,cnt-1);
    ret=max(ret,go(p+1,cnt));
    return ret;
}
int main()
{
  int tc,ks=1;
  cin>>tc;
  while(tc--)
  {
      cin>>n>>w>>k;
      for(int i=0;i<n;i++)
      {
          int x,y;cin>>x>>y;
          ay[i]=y;
      }
      sort(ay,ay+n);
      memset(dp,-1,sizeof dp);
      int ans=go(0,k);
      printf("Case %d: %d\n",ks++,ans);
  }
    return 0;
}

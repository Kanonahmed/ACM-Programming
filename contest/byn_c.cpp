#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL a[1000005],n;
bool vis[20000005];
int go(LL x)
{
    for(int i=0;i<n;i++)
        if(a[i]%x==0)return 0;
    return 1;
}
int main()
{
  cin>>n;
  if(n==0){cout<<"0"<<endl;return 0;}
  for(int i=0;i<n;i++){cin>>a[i];vis[a[i]]=1;}
  sort(a,a+n);
  LL lo,hi,m;
  lo=0,hi=10000000;
  LL ans=10000005;
  while(lo<=hi)
  {
      m=(lo+hi)/2;
      cout<<m<<endl;
      if(go(m)==1)
      {
          ans=min(ans,m);
          hi=m-1;
      }
      else lo=m+1;
  }
  cout<<ans<<endl;

    return 0;
}

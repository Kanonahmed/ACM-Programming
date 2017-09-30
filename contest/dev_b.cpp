#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
  int tc;
  scanf("%d",&tc);
  while(tc--)
  {
      LL n;
      scanf("%lld",&n);
      LL lin=0,ans=0;
      LL lo=0,hi=10000000000;
      while(lo<=hi)
      {
          LL m=(lo+hi)/2LL;
          LL sum=(m*(m+1LL))/2LL;
          if(sum<=n)
          {
              if(lin<=m);
              {
                  lin=m;
                  ans=n-sum;
              }
              lo=m+1LL;
          }
          else hi=m-1LL;
      }
      printf("%lld\n%lld\n",lin,ans);
  }

    return 0;
}

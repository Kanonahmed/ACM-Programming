#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
  int tc,ks=1;
  cin>>tc;
  while(tc--)
  {

      LL n;
      scanf("%lld",&n);
      printf("Case %d: ",ks++);
      if(n%9==0)printf("%lld %lld\n",n+(n/9)-1,n+n/9);
      else printf("%lld\n",n+n/9);
  }



    return 0;
}

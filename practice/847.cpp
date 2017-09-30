#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL p;
int go(LL n)
{
    if(n>=p)return 0;
      int ret=0;
     ret|=!go(n*2LL);
     ret|=!go(n*9LL);
     return ret;
}
int main()
{
  while(scanf("%lld",&p)==1){
   if(!go(1))printf("Ollie wins.\n");
   else printf("Stan wins.\n");
  }
    return 0;
}

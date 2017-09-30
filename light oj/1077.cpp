#include<bits/stdc++.h>
#define LL long long
using namespace std;
template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}

int main()
{
      int tc,ks=1;
      scanf("%d",&tc);
      while(tc--)
      {
          LL ax,ay,bx,by,dy,dx;
          scanf("%lld %lld %lld %lld",&ax,&ay,&bx,&by);
          dx=abs(ax-bx);
          dy=abs(ay-by);
        LL ans=gcd(dx,dy);
        printf("Case %d: %lld\n",ks++,ans+1);
      }

    return 0;
}

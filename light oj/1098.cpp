#include<bits/stdc++.h>
#define LL unsigned long long
using namespace std;
int main()
{
   int tc,ks=1;
   scanf("%d",&tc);
   while(tc--)
   {
          LL n,qq,ans=0LL;
          scanf("%llu",&n);
          qq=sqrt(n);

          for(LL i=2;i<=qq;i++)
          {
              LL ikt=n/i;
              LL sum=ikt*(ikt+1LL)/2LL;
              LL mnx=n/(i+1LL);
              if(mnx<i)mnx=i;
              LL sum2=mnx*(mnx+1LL)/2LL;
              LL total=(sum-sum2)*(i-1LL)+(ikt-1LL)*i;
              ans+=total;
          }
          printf("Case %d: %llu\n",ks++,ans);
   }

    return 0;
}

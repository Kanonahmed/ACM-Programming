#include<bits/stdc++.h>
#define LL long long
using namespace std;

template <class T> inline T bigmod(T p,T e,T M){
    LL ret = 1;
    for(; e > 0; e >>= 1){
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    } return (T)ret;
}

int main()
{
   int tc,ks=1;
   cin>>tc;
   while(tc--)
   {
        unsigned int n,k,m,sum=0;
      scanf("%u %u %u",&n,&k,&m);
        for(int i=0;i<n;i++)
        {
            unsigned int x;
            scanf("%u",&x);
            x%=m;
            sum+=x;
            sum%=m;
        }
        LL ans=sum*bigmod(n,k-1,m);
        ans%=m;
        printf("Case %d: %lld\n",ks++,(ans*k)%m);
   }



    return 0;
}

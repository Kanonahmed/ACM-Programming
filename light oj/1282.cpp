#include<bits/stdc++.h>
#define LL long long
using namespace std;

template <class T> inline T bigmod(T p,T e,T M){
    LL ret = 1;
    p%=M;
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
       LL n,k,last,fast;
       cin>>n>>k;
        last=bigmod(n,k,1000LL);

       double t=k*log10(n)-(LL)(k*log10(n));
       t=pow(10.0,t);
       fast=t*100.0;
       printf("Case %d: %lld %03lld\n",ks++,fast,last);
  }

    return 0;
}

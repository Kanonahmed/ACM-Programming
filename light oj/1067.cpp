#include<bits/stdc++.h>
#define ll long long
#define M 1000003LL
using namespace std;
ll bigmod(ll b,ll p,ll m)
{
    if(p==0)return 1;
    if(p%2==0){ll x=bigmod(b,p/2,m);return(x%m*x%m)%m;}
   // return (bigmod(b,p/2,m)%m*bigmod(b,p/2,m)%m)%m;
    else return ((b%m)*bigmod(b,p-1,m)%m)%m;


}
ll cal[1000005];
int main()
{
    ll n,r;
    cal[0]=1;
    for(ll i=1; i<=1000000; i++)
    {
        cal[i]=(cal[i-1]*i)%M;
    }
    int tc,t=0;
    cin>>tc;
    while(tc--)
    {
        scanf("%lld%lld",&n,&r);
        ll b=cal[r]*cal[n-r];
        ll res=bigmod(b,M-2,M);
        ll fnl=(cal[n]*res)%M;
        printf("Case %d: %lld\n",++t,fnl);
    }

    return 0;
}

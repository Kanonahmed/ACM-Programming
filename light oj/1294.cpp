#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m;
    int tc,t=1;
    cin>>tc;
    while(tc--)
    {
        scanf("%lld %lld",&n,&m);
        ll sum=(m*n)/2ll;
        printf("Case %d: %lld\n",t,sum);
        t++;
    }
    return 0;
}

#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll count(ll a,ll b)
{
    ll sum=0;
    while(a&&b)
    {
        sum+=b/a;
        ll rem=b%a;
        b=a;
        a=rem;
    }
    return sum;
}
int main()
{
    ll a,b;
    cin>>a>>b;
    swap(a,b);
    ll t=count(a,b);
    cout<<t<<endl;

    return 0;
}

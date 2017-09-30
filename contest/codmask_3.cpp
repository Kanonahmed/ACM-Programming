#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,ks=1;
    cin>>tc;
    while(tc--)
    {
        long long n;
        cin>>n;
        while(n%2==0)n/=2;
        printf("Case %d: %lld\n",ks++,n);
    }



}

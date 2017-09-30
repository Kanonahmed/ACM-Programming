#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,t;
    cin>>tc;
    t=1;
    while(tc--){
    int n,fact,m;
    cin>>n>>m;
    fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=(fact*i)%m;
    }
    printf("Case %d: %d\n",t,fact);
    t++;
    }
    return 0;
}

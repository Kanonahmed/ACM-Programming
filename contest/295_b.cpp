#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
if(n>=m){cout<<n-m<<endl;return 0;}
int a=0,mx=m;
for(int i=0;i<=5000000;i++)
{
    if(n==mx)break;
    if(mx>n)
    {
        if(mx%2)mx++;
        else mx/=2;
    }
    else
    {
        mx++;
    }
    a++;
}
cout<<a<<endl;

    return 0;
}

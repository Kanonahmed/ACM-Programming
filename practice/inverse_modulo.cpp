#include<bits/stdc++.h>
using namespace std;
int mod(int b,int p,int m)
{
    if(p==0) return 1;
    else if(p%2==0)
    return (mod(b,p/2,m)%m*mod(b,p/2,m)%m)%m;
    else return ((b%m)*(mod(b,p-1,m)%m)%m);
}
int main()
{
int a,b,m;
cin>>a>>b>>m;
//cout<<mod(b,m-2,m)<<endl;
int sum=((a%m)*mod(b,m-2,m))%m;
cout<<sum<<endl;
    return 0;
}

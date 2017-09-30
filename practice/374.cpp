#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
int big(int b,int p,int m)
{
    if(p==0&&b!=0)
        return 1%m;
    else if(b==0&&p!=0)
        return 0;

    else if(p%2==0)
    {
        return ((big(b,p/2,m)%m)*(big(b,p/2,m)%m))%m;
    }
    else if(p%2!=0)
    {
        return ((b%m)*(big(b,p-1,m)%m))%m;
    }
}
int main()
{

    int b,p,m;
    while(cin>>b>>p>>m)
    {cout<<big(b,p,m)<<endl;}

    return 0;
}

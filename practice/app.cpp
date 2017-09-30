#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,n;
    cin>>a>>b>>c>>d;
    int mod=a+b+c+d;

    cin>>n;
    n%=mod;
    if(n<a)cout<<"a"<<endl;
    else if(n==a)cout<<"b"<<endl;
    else if(n<(a+b))cout<<"bc"<<endl;
    else if(n==(a+b))cout<<"c"<<endl;
    else if(n<(a+b+c))cout<<"cd"<<endl;
    else if(n==(a+b+c))cout<<"d"<<endl;
    else cout<<"da"<<endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    while(b%a)
    {
        int tmp=b%a;
        b=a;
        a=tmp;
    }
    return a;
}
int main()
{
    int a,b,c,d;
    int aa,bb;
    cin>>a>>b>>c>>d;
    if(a*d>c*b)
    {
        aa=a*d-c*b;
        bb=a*d;
    }
    else if(a*d<c*b)
    {
        aa=c*b-a*d;
        bb=c*b;
    }
    else
    {
        cout<<"0/1"<<endl;
        return 0;
    }
    int k=gcd(aa,bb);
    cout<<aa/k<<"/"<<bb/k<<endl;
    return 0;
}

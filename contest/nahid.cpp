#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    if(a*d>b*c) cout<<(a*d-b*c)/__gcd(a*d-b*c, a*d)<<"/"<<(a*d)/__gcd(a*d-b*c, a*d)<<endl;
    else if(a*d<b*c) cout<<(b*c-a*d)/__gcd(b*c-a*d, b*c)<<"/"<<(b*c)/__gcd(b*c-a*d, b*c)<<endl;
    else cout<<"0/1"<<endl;
    return 0;
}

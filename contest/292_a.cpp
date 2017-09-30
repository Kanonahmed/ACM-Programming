#include<bits/stdc++.h>
using namespace std;
const int N=100000;
int main()
{
int a,b,s;
cin>>a>>b>>s;
if(a==0&&b==0&&s%2==0){cout<<"Yes"<<endl;return 0;}
if((abs(a)+abs(b))==s){cout<<"Yes"<<endl;return 0;}
if((abs(a)+abs(b))<s)
{
    int ss=s-(abs(a)+abs(b));
    if(ss%2==0)
    {cout<<"Yes"<<endl;return 0;}
    else{cout<<"No"<<endl;return 0;}
}
else cout<<"No"<<endl;


    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,q;
    int tc,t;
    cin>>tc;
    t=1;
    while(tc--){
    bool flag=false;
    cin>>n;
    int x=0;
    while(n%2==0)
    {
            flag=true;
            x++;
            n=n/2;
    }
    if(flag==true)
    cout<<"Case "<<t<<": "<<n<<" "<<pow(2,x)<<endl;
    else
    cout<<"Case "<<t<<": "<<"Impossible"<<endl;
    t++;
    }
    return 0;
}

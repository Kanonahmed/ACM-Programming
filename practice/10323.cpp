#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    while(cin>>n)
    {
        ll fact=1;
        int f=0;
        for(ll i=n; i>=1; i--)
        {
            fact*=i;
            if(fact>6227020800ll)
            {
                f=1;
                break;
            }
        }
        if(n%2==0&&n<0)
        {
            cout<<"Underflow!"<<endl;
        }
        else if(n%2!=0&&n<0)
        {
            cout<<"Overflow!"<<endl;
        }
        else if(f==1)
        {
            cout<<"Overflow!"<<endl;
        }
        else if(fact<10000)
        {
            cout<<"Underflow!"<<endl;
        }
        else cout<<fact<<endl;
    }


    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,a,b,n;
    cin>>tc;
    while(tc)
    {
        a=0;b=0;
        cin>>n;
        if(n>10)
        {a=10;
        b=n-10;
        }
        else
        b=n;
        cout<<a<<" "<<b<<endl;
        tc--;
    }


    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int go(int n)
{
    int res=0;
    while(n)
    {
        int rem=n%2;
        if(rem)res++;
        n/=2;
    }
    return res;
}
int main()
{
    int tc,t=1;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int ret=go(n);
        if(ret%2)
        cout<<"Case "<<t++<<": "<<"odd"<<endl;
        else cout<<"Case "<<t++<<": "<<"even"<<endl;
    }




    return 0;
}

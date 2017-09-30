#include<bits/stdc++.h>
using namespace std;
int res(int n)
{
    int r=0;
    while(n>4)
    {
        r+=n/5;
        n=n/5;
    }
    return r;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        cout<<res(n)<<endl;
    }
    return 0;
}

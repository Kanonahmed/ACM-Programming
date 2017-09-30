#include<bits/stdc++.h>
using namespace std;
int go(int u)
{
    cout<<u<<endl;
    if(u==0)return 0;
    if(u==1)return 1;
    int l=go(u-1);
    int l2=go(u-2);
    return (l+l2);
}
int main()
{
    int n;
    cin>>n;
    cout<<go(n)<<endl;


    return 0;
}

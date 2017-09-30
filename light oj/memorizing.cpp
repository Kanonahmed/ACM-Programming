#include<bits/stdc++.h>
using namespace std;
int a[100];
int fabo(int n)
{
    if(n==0)return 0;
    if(n==1)return 1;
    if(a[n]!=-1) return a[n];
    return a[n]=fabo(n-1)+fabo(n-2);
}
int main()
{
    int x;
    memset(a,-1,sizeof a);
    cin>>x;
    cout<<fabo(x);

    return 0;
}

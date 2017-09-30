#include<bits/stdc++.h>
using namespace std;
int fab(int n)
{
    if(n==1)return 1;
    if(n==2) return 1;
    return fab(n-1)+fab(n-2);
}
int main()
{
int n;
cin>>n;
cout<<fab(n);

    return 0;
}

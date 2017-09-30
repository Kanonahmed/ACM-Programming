#include<bits/stdc++.h>
using namespace std;
int sum;
void summ(int x,int n)
{
    if(n<0)return;
    sum+=pow(x,n);
    summ(x,n-1);
}
int main()
{
int x,n;
cin>>x>>n;
summ(x,n-1);
cout<<sum<<endl;
    return 0;
}

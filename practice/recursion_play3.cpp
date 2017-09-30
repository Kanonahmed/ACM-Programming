#include<bits/stdc++.h>
using namespace std;
int a[20];
void odd(int in,int las)
{
   if(in==las)return;
   if(a[in]%2!=0)
   cout<<a[in]<<" ";
   odd(in+1,las);
}
int main()
{
int n;
cin>>n;
for(int i=0;i<n;i++)
cin>>a[i];
odd(0,n);


    return 0;
}

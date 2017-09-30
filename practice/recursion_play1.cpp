#include<bits/stdc++.h>
using namespace std;
int a[20];
void reverse(int i)
{
   if(i==5)return ;
   reverse(i+1);
   cout<<a[i]<<endl;
}
int main()
{
for(int i=0;i<5;i++)
cin>>a[i];
 reverse(0);
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int a[20];
void print(int i)
{
  if(i==5)return ;
  cout<<a[i]<<" ";
  print(i+1);
}
int main()
{
for(int i=0;i<5;i++)
cin>>a[i];
print(0);


    return 0;
}

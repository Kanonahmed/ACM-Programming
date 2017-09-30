#include<bits/stdc++.h>
using namespace std;
int a[1000];
int main()
{
 int n;
 int cnt=0;
 cin>>n;
 for(int i=1;i<=n;i++)cin>>a[i];

 for(int i=1;i<=n;i++)
    for(int j=i+1;j<=n;j++)
         for(int k=j+1;k<=n;k++)
            if((a[i]+a[j]+a[k])==30)cnt++;

            cout<<cnt<<endl;


    return 0;
}

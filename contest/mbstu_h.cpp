#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   while(cin>>n)
   {
       int a[101];
       for(int i=0;i<n;i++)
        cin>>a[i];
       sort(a,a+n);
       if(n==1){cout<<a[0]<<endl;continue;}
       if(n==2){cout<<a[0]*a[1]<<endl;continue;}
       int first=a[n-1];
       int second=a[n-2];
       int sum=first*second;
       int tt=(first+second)%100;
       for(int i=n-3;i>=0;i--)
       {
           sum+=a[i]*tt;
           tt=(tt+a[i])%100;
       }
       cout<<sum<<endl;
   }

    return 0;
}

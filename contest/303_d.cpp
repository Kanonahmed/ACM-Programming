#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
   int n;
   cin>>n;
   for(int i=0;i<n;i++)cin>>a[i];
   sort(a,a+n);
   long long sum=0;
   int cnt=0;
   for(int i=0;i<n;i++)
   {
       if(sum<=a[i])sum+=a[i];
       else
        cnt++;
   }
   cout<<n-cnt<<endl;
    return 0;
}

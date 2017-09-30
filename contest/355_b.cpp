#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL a[1000005];
int main()
{
   LL n,h,s;
   cin>>n>>h>>s;
   for(int i=1;i<=n;i++)cin>>a[i];
   LL sum=0,ans=0;
   for(int i=1;i<=n;)
   {
       if(sum+a[i]>h){ans++;sum=0;}
       while((sum+a[i])<=h&&i<=n){sum+=a[i];i++;}
       ans+=sum/s;
       sum=sum%s;
   }
  if(sum)ans++;
  cout<<ans<<endl;

    return 0;
}

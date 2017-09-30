#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,a[1000];
   cin>>n;
   for(int i=1;i<=n;i++)cin>>a[i];

   int mx=-2000000000;
   for(int i=1;i<=n;i++)
    if(mx<a[i])mx=a[i];

   int ans=-2000000000;
   int cnt=0;
   for(int i=1;i<=n;i++)
      {
          if(a[i]==mx)
          {
              cnt++;
              if(cnt==2){ans=mx;break;}
          }
          else
          {
              if(ans<a[i])ans=a[i];
          }
      }

   cout<<ans<<endl;

    return 0;
}

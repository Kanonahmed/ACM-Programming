#include<bits/stdc++.h>
#define LL long long
using namespace std;
map<LL,int>mp;
LL a[100001];
int main()
{
  int n,k=1;
  cin>>n;
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
      mp[a[i]]++;
  }
    LL ans=0;
   for(int i=0;i<n;i++)
   {
       mp[a[i]]--;
        LL x=2;
       for(int j=1;j<=35;j++,x*=2)
       {
           if(x>=a[i]){
           int df=x-a[i];
           if(mp.find(df)==mp.end())continue;
           else
           {
               if(mp[df]>0)ans+=mp[df];
               else continue;
           }
           }
       }
   }
    cout<<ans<<endl;

    return 0;
}

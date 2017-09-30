#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)cin>>a[i];
  sort(a+1,a+n+1);
  set< pair<int,int> >stt;
  int mx=200000000;
  for(int i=1;i<n;i+=2)
  {
      int df=abs(a[i]-a[i+1]);
      if(df==mx)
      {
          stt.insert({a[i],a[i+1]});
      }
      else if(df<mx)
      {
          stt.clear();
          mx=df;
          stt.insert({a[i],a[i+1]});
      }
      else continue;
  }

for(int i=2;i<n;i+=2)
  {
      int df=abs(a[i]-a[i+1]);
      if(df==mx)
      {
          stt.insert({a[i],a[i+1]});
      }
      else if(df<mx)
      {
          stt.clear();
          mx=df;
          stt.insert({a[i],a[i+1]});
      }
      else continue;
  }
   set< pair<int,int> >::iterator it;
   for(it=stt.begin();it!=stt.end();++it)
   {
       cout<<(*it).first<<" "<<(*it).second<<" ";
   }
  cout<<endl;
    return 0;
}

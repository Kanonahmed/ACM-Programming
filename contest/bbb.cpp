#include<bits/stdc++.h>
using namespace std;
int a[10000005];
int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++)cin>>a[i];
  sort(a,a+n);
  int q=a[n-1];
  for(int i=2;i<q;i++)
  {
      int chk=0;
      for(int j=0;j<n;j++)
      {
          if(a[j]%i==0){chk=1;break;}
      }
      if(chk==0){cout<<i<<endl;return 0;}
  }
  cout<<a[n-1]+1<<endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace  std;
int main()
{
  int n;
  long long a[100005],b[100005];
  cin>>n;
  long long sum=0;
  int k=0;
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
      if(a[i]%2==0)sum+=a[i];
      else b[k++]=a[i];
  }
  sort(b,b+k);
  if(k%2==0)
  for(int i=k-1;i>=0;i--)sum+=b[i];
  else for(int i=k-1;i>=1;i--)sum+=b[i];
  cout<<sum<<endl;

    return 0;
}

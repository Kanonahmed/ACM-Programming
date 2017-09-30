#include<bits/stdc++.h>
#define inf INT_MAX;
using namespace std;
int a[1000005],n,I[1000005];
int go()
{
    for(int i=0;i<=n;i++)I[i]=inf;
    I[0]=-inf;
    int best=0;
    for(int i=0;i<n;i++){
    int lo=0,hi=n;
    while(lo<=hi)
    {
        int mid=(lo+hi)/2;
        if(a[i]>I[mid])lo=mid+1;
        else hi=mid-1;
    }
   I[lo]=a[i];
   best=max(best,lo);
  }

  return best;
}
int main()
{
  cin>>n;
  for(int i=0;i<n;i++)cin>>a[i];
  cout<<go()<<endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int a[100005];
void marge(int lb,int mid,int ub)
{
    int i,j,k=0,p=0;
    int tmp[ub-lb+5];
    i=lb;
    j=mid+1;
    while(i<=mid&&j<=ub)
    {
        if(a[i]<a[j])tmp[k++]=a[i++];
        else tmp[k++]=a[j++];
    }

    while(i<=mid)tmp[k++]=a[i++];
    while(j<=ub)tmp[k++]=a[j++];

    for(i=lb,p=0;i<=ub&&p<k;i++,p++)a[i]=tmp[p];

}
void go_sort(int lb,int ub)
{
    if(lb>=ub)return;
    int mid=(lb+ub)/2;
    go_sort(lb,mid);
    go_sort(mid+1,ub);
    marge(lb,mid,ub);
}
int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++)cin>>a[i];

  go_sort(0,n-1);
   for(int i=0;i<n;i++)cout<<a[i]<<" ";

    return 0;
}

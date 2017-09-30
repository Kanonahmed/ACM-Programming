#include<bits/stdc++.h>
using namespace std;
int n,a[9000000],r,k;
int main()
{
  scanf("%d %d %d",&r,&k,&n);
  for(int i=1;i<=n;i++)scanf("%d",&a[i]);
   int id=1;
   int ans=0;
   for(int i=1;i<=r;i++)
   {
       int sum=0;
       int d=0;
       for(int j=id;j<n+id;j++)
       {
           //cout<<j<<endl;
           sum=sum+a[j];
           if(sum<=k)
           {
               d=j;
               a[n+j]=a[j];
           }
           else
           {
               sum-=a[j];
               break;
           }
       }
       id=d+1;
       //cout<<id<<endl;
       ans+=sum;
   }
  cout<<ans<<endl;


    return 0;
}

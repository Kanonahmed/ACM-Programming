#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,a[30];
  scanf("%d",&n);
  //long long sum=0;
  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);//sum+=(long long)a[i];}
  sort(a,a+n);
  long long sum=0;
  for(int i=n-1;i>=0;i--)
  {
      if(i==n-1)sum+=(long long)a[i];
       else if(a[i]>0&&a[i]!=a[i+1])sum+=(long long)a[i];
      else if(a[i]>0)
      {
             int ss=a[i];
          int cnt=1;
          for(int j=i;j>=0;j--)
            {
                if(ss!=a[j])break;
                a[j]--;
            }
            //cout<<a[i]<<endl;
            sum+=(long long)a[i];
      }
  }
  printf("%lld\n",sum);
    return 0;
}

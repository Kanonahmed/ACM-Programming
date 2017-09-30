#include<bits/stdc++.h>
using namespace std;
int n;
double a[105];
double go(int pos)
{
    if(pos==n)return a[pos];
    go(pos+1);
    int j=0;
    double sum=0;
    for(int i=pos+1;i<=n&&j<6;j++,i++)sum+=a[i];
    a[pos]+=sum/j;
    return a[pos];
}
int main()
{
  int tc,tt=1;
  cin>>tc;
  while(tc--)
  {
      cin>>n;
      for(int i=1;i<=n;i++)scanf("%lf",&a[i]);
      printf("Case %d: %0.7lf\n",tt++,go(1));
  }
    return 0;
}

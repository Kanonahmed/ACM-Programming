#include<bits/stdc++.h>
#define LL long long
using namespace std;
double dp[100002],pre;
void go()
{
    pre=0.0;
  for(int i=1;i<=100000000;i++)
  {
      pre+=1.0/(double)i;
      if(i%1000==0)dp[i/1000]=pre;
  }
}
int main()
{
  go();
 int tc,ks=1;
 cin>>tc;
 while(tc--)
 {
     int n,k;
     scanf("%d",&n);
     k=n/1000;
     double ans=dp[k];
     for(int i=k*1000+1;i<=n;i++)ans+=1.0/(double)i;
     printf("Case %d: %0.9f\n",ks++,ans);
 }


    return 0;
}

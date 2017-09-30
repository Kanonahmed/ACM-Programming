#include<bits/stdc++.h>
using namespace std;
int go(int n,int div)
{
    int cnt=0;
    while(n)
    {
        cnt+=n/div;
        n/=div;
    }
    return cnt;
}
int main()
{
      int tc,ks=1;
      scanf("%d",&tc);
      while(tc--)
      {
          int n,r,p,q;
          scanf("%d %d %d %d",&n,&r,&p,&q);
          int tw=go(n,2)-go(r,2)-go(n-r,2);
          int fv=go(n,5)-go(r,5)-go(n-r,5);
          int to=0,fo=0;
          while(p%2==0&&p){to++;p/=2;}
          while(p%5==0&&p){fo++;p/=5;}
          int ans=min(tw+to*q,fv+fo*q);
          printf("Case %d: %d\n",ks++,ans);
      }



    return 0;
}

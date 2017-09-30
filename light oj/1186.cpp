#include<bits/stdc++.h>
using namespace std;
int main()
{
   int tc,ks=1;
   scanf("%d",&tc);
   while(tc--)
   {
      int n,w[102];
      scanf("%d",&n);
      for(int i=0;i<n;i++)scanf("%d",&w[i]);
      int res=0;
      for(int i=0;i<n;i++)
      {
          int b;scanf("%d",&b);
          res^=(b-w[i]-1);
      }
      if(res)printf("Case %d: white wins\n",ks++);
      else printf("Case %d: black wins\n",ks++);
   }

    return 0;
}

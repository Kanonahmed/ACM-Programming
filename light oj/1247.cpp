#include<bits/stdc++.h>
using namespace std;
int main()
{
   int tc,ks=1;
   scanf("%d",&tc);
   while(tc--)
   {
     int r,c;
     scanf("%d%d",&r,&c);
     int res=0;
     for(int i=0;i<r;i++)
     {
         int sum=0;
         int x;
         for(int j=0;j<c;j++)scanf("%d",&x),sum+=x;
         res^=sum;
     }
      if(res)printf("Case %d: Alice\n",ks++);
      else printf("Case %d: Bob\n",ks++);
   }

    return 0;
}

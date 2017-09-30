#include<bits/stdc++.h>
#define LL long long
using namespace std;
bool rw[100005],cw[100005];
int main()
{
   LL n,m,rs;
   cin>>n>>m;
   rs=n*n;
   LL r,c;
   r=c=n;
   while(m--)
   {
       int x,y;
       scanf("%d %d",&x,&y);
       if(rw[x]==0)
       {
           rw[x]=1;
           c--;
           rs-=r;
       }
       if(cw[y]==0)
       {
           cw[y]=1;
           r--;
           rs-=c;
       }
       printf("%lld\n",rs);
   }

    return 0;
}

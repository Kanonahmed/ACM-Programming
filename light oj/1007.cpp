#include<bits/stdc++.h>
#define LL unsigned long long
using namespace std;
bool vis[5000009];
LL prcal[5*1000005];
void phi()
{
    prcal[0]=prcal[1]=0LL;
    for(int i=2;i<=5000001;i++)prcal[i]=(LL)i;

    for(int i=2;i<=5000001;i++)
    {
        if(!vis[i])
        {
            for(int j=i;j<=5000001;j+=i)
            {
                vis[j]=1;
                prcal[j]=prcal[j]*(LL)(i-1LL)/(LL)i;
            }
        }
    }

    for(int i=2;i<=5000001;i++)
        prcal[i]=prcal[i]*prcal[i]+prcal[i-1];
}
int main()
{
    phi();
   int tc,ks=1;
   scanf("%d",&tc);
   while(tc--)
   {
       LL a,b;
       scanf("%d %d",&a,&b);
      printf("Case %d: %llu\n",ks++,prcal[b]-prcal[a-1]);
   }
    return 0;
}

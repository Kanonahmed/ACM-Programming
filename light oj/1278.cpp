#include<bits/stdc++.h>
#define LL long long
using namespace std;
bool vis[10000005];
int pr[1000005],k;
void seive()
{
    int q=sqrt(10000002);
    for(int i=2;i<=q;i++)
    {
        if(!vis[i])
        {
            for(int j=i*i;j<=10000002;j+=i)vis[j]=1;
        }
    }
    for(int i=2;i<=10000002;i++)if(!vis[i])pr[k++]=i;
}
int main()
{
    seive();
   int tc,ks=1;
   cin>>tc;
   while(tc--)
   {
    LL n,ans=1;
     scanf("%lld",&n);
     LL q=sqrt(n);
     for(int i=0;(LL)pr[i]<=q&&i<k;i++)
     {
         if(n%(LL)pr[i]==0)
         {
             LL cnt=0;
             while(n%(LL)pr[i]==0)n/=(LL)pr[i],cnt++;
             if(pr[i]&1)ans*=(cnt+1LL);
         }
     }
     if(n>1LL&&(n&1))ans*=2LL;

      printf("Case %d: %lld\n",ks++,ans-1LL);
   }



    return 0;
}

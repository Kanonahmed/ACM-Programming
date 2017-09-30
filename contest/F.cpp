#include<bits/stdc++.h>
#define LL long long
using namespace std;
const LL N=100000;
LL pr[500000],vis[500000],k;
vector<LL>pv;
void seive()
{
    for(LL i=3;i<=N;i+=2)
    {
        if(!vis[i])
           {
             pr[++k]=i;
                for(int j=2*i;j<=N;j+=i)vis[j]=1;
           }
    }
    pr[0]=2;
}
void prime_factorization(LL n)
{
    seive();
    pv.clear();
    for(LL i=0;i<=sqrt(n);i++)
       {
           if(n%pr[i]==0)
           {
              pv.push_back(pr[i]);
              while(n%pr[i]==0)n/=pr[i];
           }
       }
       if(n>1)pv.push_back(n);
}
LL bitmask(LL a,LL b)
{
       int sz=pv.size();
       LL p=1<<sz;
       LL res1=a-1;
       LL res2=b;
       for(LL i=1;i<p;i++)
       {
           int c=0;
           LL ans=1;
         for(LL j=0;j<sz;j++)
         {
             if(i&(1<<j))
             {
                 c++;
                 ans*=pv[j];
             }
         }
         if(c%2){res1-=((a-1)/ans);res2-=(b/ans);}
         else{res1+=((a-1)/ans);res2+=(b/ans);}
       }
     return (res2-res1);
}
int main()
{
   int tc,t=1;
   cin>>tc;
   while(tc--)
   {
       LL a,b,n;
       scanf("%lld%lld%lld",&a,&b,&n);
       prime_factorization(n);
       LL ans=bitmask(a,b);
       printf("Case #%d: %lld\n",t,ans);
       t++;
   }


    return 0;
}

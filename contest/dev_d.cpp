#include<bits/stdc++.h>
#define LL long long
using namespace std;
bool vis[3000009];
int pr[3000050],k;
void seive()
{
    pr[0]=2;
    k=1;
    for(int i=3;i<=3000005;i+=2)
    {
        if(!vis[i])
        {
            pr[k++]=i;
            for(int j=2*i;j<=3000005;j+=i)vis[j]=1;
        }
    }
}
int main()
{
   seive();
   //cout<<k<<endl;
   int tc;
   scanf("%d",&tc);
   while(tc--)
   {
       LL n;
       scanf("%lld",&n);
       LL sq=sqrt(n);
       LL ans=0;
       for(int i=0;pr[i]<=sq&&i<k;i++)
       {
           if(n%(LL)pr[i]==0LL)
           {
               while(n%(LL)pr[i]==0LL)
               {
                   ans++;
                   n/=(LL)pr[i];
               }
           }
       }
       if(n>1LL)ans++;
       printf("%lld\n",ans);
   }

    return 0;
}

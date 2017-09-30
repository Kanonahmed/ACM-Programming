#include<bits/stdc++.h>
#define LL long long
using namespace std;

template <class T> inline T bigmod(T p,T e,T M){
    LL ret = 1;
    for(; e > 0; e >>= 1){
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    } return (T)ret;
}
template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}
const LL MD=1000000007;
LL pr[100000],k;
bool vis[100005];
void seive()
{
    pr[0]=2;
    for(LL i=3;i<=100003;i+=2)
    {
        if(!vis[i])
        {
            pr[++k]=i;
            for(LL j=2*i;j<=100003;j+=i)vis[j]=1;
        }
    }
}
int main()
{
   int tc,ks=1;
   seive();
   scanf("%d",&tc);

   while(tc--)
   {
           LL n,m,q;
           scanf("%lld %lld",&n,&m);
           q=sqrt(n);
           LL ans=1;
           for(int i=0;pr[i]<=q&&i<=k;i++)
           {
               if(n%pr[i]==0)
               {
                   LL cnt=0;
                   while(n%pr[i]==0){cnt++;n/=pr[i];}
                   cnt=cnt*m;
                   LL up=bigmod(pr[i],cnt+1,MD);
                   up=((up-1)+MD)%MD;
                   LL down=modinverse(pr[i]-1LL,MD);
                   LL sum=(up*down)%MD;
                   ans=(ans*sum)%MD;
               }
           }
           if(n>1)
           {
               LL up=bigmod(n,1LL*m+1,MD);
                   up=((up-1)+MD)%MD;
                   LL down=modinverse(n-1,MD);
                   LL sum=(up*down)%MD;
                   ans=(ans*sum)%MD;
           }
           printf("Case %d: %lld\n",ks++,ans);
   }



    return 0;
}


#include<bits/stdc++.h>
using namespace std;
#define xx              first
#define yy              second
#define pb              push_back;
#define mp              make_pair
#define LL              long long
#define PI              acos(-1.0)
#define AND(a,b)        ((a) & (b))
#define OR(a,b)         ((a)|(b))
#define XOR(a,b)        ((a) ^ (b))
#define f1(i,n)         for(int i=1;i<=n;i++)
#define f0(i,n)         for(int i=0;i<n;i++)
#define meminf(B)       memset(B,126,sizeof B)
#define DEG_to_REDI(X) (X*PI/180)
#define REDI_to_DEG(X) (180*X/(PI))
#define UB(a,x) (upper_bound(all(a),x)-a.begin())
#define LB(a,x) (lower_bound(all(a),x)-a.begin())
#define countbit(x) __builtin_popcountll((ll)x)

template <class T> inline T bigmod(T p,T e,T M){
    LL ret = 1;
    for(; e > 0; e >>= 1){
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    } return (T)ret;
}
template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}

/*    ----------------------------------------
     |         Scratch where itches           |
      ----------------------------------------   */

int Set(int N,int pos){ return N=N | (1<<pos);}
int Reset(int N,int pos){return N= N & ~(1<<pos);}
bool Chkbit(int N,int pos){return (bool)(N & (1<<pos));}
int month[]={-1,31,28,31,30,31,30,31,31,30,31,30,31};  //Not Leap Year
int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
//int dx[]={-1,-1,+0,+1,+1,+0};int dy[]={-1,+1,+2,+1,-1,-2}; //Hexagonal Direction

const double eps=1e-6;
LL pr[1000000];
int k;
bool vis[1000009];
void seive()
{
    pr[0]=2;
    for(LL i=3;i<=1000005;i+=2)
    {
        if(!vis[i])
        {
            pr[++k]=i;
            for(LL j=2*i;j<=1000005;j+=i)vis[j]=1;
        }
    }
}
int main()
{
    seive();
    int tc,ks=1;
    scanf("%d",&tc);
    while(tc--)
    {
        LL a,b,c,l,ans=1;
        scanf("%lld %lld %lld",&a,&b,&l);
        if(l%a||l%b){printf("Case %d: impossible\n",ks++);continue;}
        LL q=sqrt(l);
        for(int i=0;pr[i]<=q&&i<=k;i++)
        {
            int ac=0,bc=0,lc=0;
            LL res=1;
            while(a%pr[i]==0)ac++,a/=pr[i];
            while(b%pr[i]==0)bc++,b/=pr[i];
            while(l%pr[i]==0)lc++,res*=pr[i],l/=pr[i];
            if(lc>ac&&lc>bc)ans*=res;
        }
      printf("Case %d: %lld\n",ks++,ans);
    }

    return 0;
}



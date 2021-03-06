#include<iostream>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<set>
#include<utility>
#include<iomanip>
#include<queue>
using namespace std;

#define LL long long int
#define uLL unsigned long long int

#define S(a) scanf("%d",&a)
#define S2(a,b) scanf("%d%d",&a,&b)
#define S3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define SLL(a) scanf("%lld",&a)
#define SLL2(a,b) scanf("%lld%lld",&a,&b)
#define SLL3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define SC(a) scanf("%c",&a)
#define P(a) printf("%d",a)
#define PS(a) printf("%s",a)
#define PLL(a) printf("%lld",a)
#define PCASE(kk) printf("Case %d: ",kk++)
#define PCASENL(kk) printf("Case %d:\n",kk++)
#define NL puts("")

#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define pi (2.0*acos(0.0))
#define pii pair<int,int>

template<typename T>inline T POW(T B,T P)
{
    if(P==0) return 1;
    if(P&1) return B*POW(B,P-1);
    else return SQR(POW(B,P/2));
}
template <typename T>inline T ModInv (T b,T m)
{
    return BigMod(b,m-2,m);
}
template<typename T>inline T ABS(T a)
{
    if(a<0)return -a;
    else return a;
}
template<typename T>inline T gcd(T a,T b)
{
    if(a<0)return gcd(-a,b);
    if(b<0)return gcd(a,-b);
    return (b==0)?a:gcd(b,a%b);
}
template<typename T>inline T lcm(T a,T b)
{
    if(a<0)return lcm(-a,b);
    if(b<0)return lcm(a,-b);
    return a*(b/gcd(a,b));
}
template <class T> inline T BMOD(T p,T e,T m)
{
    T ret=1;
    while(e)
    {
        if(e&1) ret=(ret*p)%m;
        p=(p*p)%m;
        e>>=1;
    }
    return (T)ret;
}

//for(__typeof(pp.begin()) i=pp.begin(); i!=pp.end(); i++ )

//knight and king move....



//int Dx[]={-2,-1,1,2,1,2,-2,-1};
//int Dy[]={-1,-2,2,1,-2,-1,1,2};
//int dx[]={-1,1,0,0};
//int dy[]={0,0,-1,1};
//int dx[]= {-1,-1,0,0,1,1};
//int dy[]= {-1,0,-1,1,0,1};
//////////////////////////////////////////////////

#define md 1000000007LL
int n,c;
LL dp[100005][11][11];
LL go(int pos,int ur,int dr)
{
    if(pos==n+1)return 1;

    if(dp[pos][ur][dr]!=-1)return dp[pos][ur][dr];
    LL ret=0;

    for(int i=1;i<=c;i++)
    {
        for(int j=1;j<=c;j++)
        {
            if(i==j)continue;
            if(ur!=i && dr!=j)ret=(ret+go(pos+1,i,j))%md;
//            if(dr!=j)ret+=go(pos+1,i,j);
        }
    }
    return dp[pos][ur][dr]=ret;
}

int main()
{
    LL cn[11];
    cn[3]=3LL;
    int bar=4;
    for(int i=4;i<=10;i++)
    {
        cn[i]=cn[i-1]+bar;
        bar+=2LL;
    }

    int t,tc=1;
    S(t);
    while(t--)
    {
        S2(n,c);

//        memset(dp,-1,sizeof dp);
//
//        LL ans=go(1,0,0);
//        PLL(ans),NL;
//        PCASE(tc);
        if(c==1)
        {
            P(0),NL;
        }
        else if(c==2)
        {
            P(2),NL;
        }
        else{
            LL ini=c*(c-1);

            for(int i=2;i<=n;i++)
            {
                ini=(ini*cn[c])%md;
            }
            PLL(ini),NL;
        }

    }
    return 0;
}

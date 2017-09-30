#include <algorithm>
#include <cstdio>
#include <sstream>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <set>
#include <queue>
#include <stack>
#include <list>
#include <iostream>
#include <fstream>
#include <numeric>
#include <string>
#include <vector>
#include <cstring>
#include <map>
#include <iterator>
#include <deque>
#include <climits>
#include <complex>
#include <bitset>

using namespace std;

/*......define........*/
#define pi          2.0*acos(0.0)
#define ull         unsigned long long
#define ll          long long int
#define pb(a)       push_back(a)
#define pf(a)       push_front(a)
#define ppb         pop_back()
#define ppf         pop_front()
#define UB          upper_bound
#define LB          lower_bound
#define sz()        size()
#define SQR(a)      (a)*(a)

/*...........I/O..........*/
#define s1(a)       scanf("%d",&a)
#define s2(a,b)     scanf("%d%d",&a,&b)
#define s3(a,b,c)   scanf("%d%d%d",&a,&b,&c)
#define sl1(a)      scanf("%lld",&a)
#define sl2(a,b)    scanf("%lld%lld",&a,&b)
#define sl3(a,b,c)  scanf("%lld%lld%lld",&a,&b,&c)
#define sul1(a)     scanf("%llu",&a)
#define sul2(a,b)   scanf("%llu%llu",&a,&b)
#define sul3(a,b,c) scanf("%llu%llu%llu",&a,&b,&c)
#define f(i,a,b)    for(int i=a;i<=b;i++)
#define rev(i,a,b)  for(int i=b;i>=a;i--)
#define fi          first
#define se          second
#define MP          make_pair
#define mem(a,v)    memset(a,v,sizeof a)
#define OnBit(a)    __builtin_popcountll(a)
#define pc(a)       printf("Case %d: ",a);
#define NL          printf("\n");


template <typename T> T BigMod (T b,T p,T m)
{
    if (p == 0) return 1;
    if (p%2 == 0)
    {
        T s = BigMod(b,p/2,m);
        return ((s%m)*(s%m))%m;
    }
    return ((b%m)*(BigMod(b,p-1,m)%m))%m;
}
template <typename T> T ModInv (T b,T m)
{
    return BigMod(b,m-2,m);
}
template <typename T> T lcm(T a,T b)
{
    if(a<0)return lcm(-a,b);
    if(b<0)return lcm(a,-b);
    return a*(b/__gcd(a,b));
}

double DEG(double x)
{
    return (180.0*x)/(pi);
}
double RAD(double x)
{
    return (x*(double)pi)/(180.0);
}

#define MX  1000007
#define MOD 1000000007ll
#define INF (1<<30)-1
#define eps 1e-9

ll n,m,x,y,res;
int mob[1000005],vis[1000005];

void mobious()
{
    int sqr=1000000,p;
    for(int i=1; i<=sqr; i++)mob[i]=1;
    for(int i=2; i<=sqr; i++)
    {
        if(!vis[i])
        {

            for(int j=i; j<=sqr; j+=i)
            {
                vis[j]++;
                mob[j]*=i;
            }
        }
    }
//    cout<<vis[2]<<" "<<vis[30]<<endl;
    //cout<<mob[2]<<" "<<mob[6]<<endl;
}

int main()
{
    mobious();
    int tc,cs=1;
    s1(tc);
    while(tc--)
    {
        sl2(x,y);
        n=min(x,y);
        m=max(x,y);
        res=0;
        for(int i=1; i<=n; i++)
        {
            if(mob[i]==i)
            {
                if(vis[i]%2==1)res-=(ll)((n/i)*(m/i));
                else res+=(ll)((n/i)*(m/i));
            }
        }
        if(n)res++;
        if(m)res++;

        printf("Case %d: %lld\n",cs++,res);
    }
    return 0;
}

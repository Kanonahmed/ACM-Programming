//******************* kanon *************************************//

#include<bits/stdc++.h>
#include<algorithm>
#define MPI            map<int,int>
#define PRI            pair<int,int>
#define VI             vector<int>
#define STI            stack<int>
#define QI             queue<int>
#define PI             2*acos(0.0)
#define DEG_to_REDI(X) (X*PI/180)
#define REDI_to_DEG(X) (180*X/(PI))
#define inf            INT_MAX
#define pb(X)          push_back(X)
#define f(i,n)         for(int i=0;i<(n);i++)
#define sc2(X,Y)       scanf("%d%d",&X,&Y)
#define sc1(X)         scanf("%d",&X)
#define set0(a)        memset(a,0,sizeof(a))
#define clr(a)         clear.a
#define eps 1e-9
#define P 1000000
template<class T> T SQR(T X)
{
    return X*X;
}
template<class T> T GCD(T a, T b)
{
    if(b==0)return a;
    else return GCD(b,a%b);
}
template<class T> T LCM(T a,T b)
{
    return (a*b)/(GCD(a,b));
}
template<class T> T MOD(T a,T b)
{
    if(a>0) return a%b;
    else return (a%b+b)%b;
}
template<class T> T BIGMOD(T b,T p,T m)
{
    if(p==0)return 1;
    else if(p%2==0) return (BIGMOD(b,p/2,m)%m*BIGMOD(b,p/2,m)%m)%m;
    else return ((b%m)*BIGMOD(b,p-1,m)%m)%m;
}
using namespace std;
const int N=10000;
int main()
{
int n,m,a,s1,s2;
long long s;
sc2(n,m);
sc1(a);
s1=n/a;
if(n%a!=0)
s1++;
s2=m/a;
if(m%a!=0) s2++;
s=(long long)s1*s2;
cout<<s<<endl;




    return 0;
}


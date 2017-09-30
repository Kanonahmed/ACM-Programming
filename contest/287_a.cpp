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
#define f2(c,i,n)       for(int i=(c);i<(n);i++)
#define sc2(X,Y)       scanf("%d%d",&X,&Y)
#define sc2(X,Y,Z)     scanf("%d%d%d",&X,&Y,&Z)
#define sc1(X)         scanf("%d",&X)
#define scs(s)         getline(cin, s)
#define set0(a)        memset(a,0,sizeof(a))
#define clr(a)         a.clear()
#define srt(a)        sort(a.begin(),a.end())
#define rev(a)        reverse(a.begin(),a.end())
#define cmpr(s1,s2)   if(s1.compare(s2)==0)
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

    int n,m,a[100005],b[100005],vis[100005];
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a+1,a+(n+1));
    int sum=0;
    int cnt=0;
    for(int i=1; i<=n; i++)
    {
        sum+=a[i];
        if(sum>m)
        {
            break;
        }
        for(int j=1;j<=n;j++)
        {
            if(a[i]==b[j])
            {vis[cnt]=j;
            b[j]=-1;
            break;
            }
        }
        cnt++;

    }
    cout<<cnt<<endl;
for(int i=0;i<cnt;i++)
{
    cout<<vis[i]<<" ";
}





    return 0;
}


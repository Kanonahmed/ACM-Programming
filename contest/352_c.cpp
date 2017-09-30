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
double ax,ay,bx,by,tx,ty;
double dp[100005][2][2],a[100005],b[100005];
bool vis[100005][2][2];
int m;
double dis(double x,double y,double x1,double y1)
{
    double p=(x-x1)*(x-x1)+(y-y1)*(y-y1);
    return sqrt(p);
}
double go(int p,int f1,int f2)
{
    if(p>m)
    {
        if(f1||f2)return 0.0;
        return 9000000000000000.0;
    }
    double &ret=dp[p][f1][f2];
    if(vis[p][f1][f2])return ret;
    vis[p][f1][f2]=1;
    ret=2.0*dis(tx,ty,a[p],b[p])+go(p+1,f1,f2);
    if(!f1)
    {
        ret=min(ret,dis(ax,ay,a[p],b[p])+dis(a[p],b[p],tx,ty)+go(p+1,1,f2));
    }
    if(!f2)
    {
        ret=min(ret,dis(bx,by,a[p],b[p])+dis(a[p],b[p],tx,ty)+go(p+1,f1,1));
    }
    return ret;
}
int main()
{
   cin>>ax>>ay>>bx>>by>>tx>>ty;
   cin>>m;
   for(int i=1;i<=m;i++)cin>>a[i]>>b[i];
   double res=go(1,0,0);
   printf("%.10lf\n",res);

   return 0;
}


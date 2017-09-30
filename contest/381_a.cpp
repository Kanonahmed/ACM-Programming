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
#define all(a)          a.begin(),a.end()
#define DEG_to_REDI(X) (X*PI/180)
#define REDI_to_DEG(X) (180*X/(PI))
#define UB(a,x) (upper_bound(all(a),x)-a.begin())
#define LB(a,x) (lower_bound(all(a),x)-a.begin())
#define countbit(x) __builtin_popcountll((LL)x)
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
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
LL n,a[5];
LL dp[4][20005];
LL nm[]={1,2,3};
LL ans[20005];
LL go(int p,LL rm)
{
    if(p==3){
        if(rm==0LL)return 0LL;
        else return 100000000000LL;
    }

    LL &ret=dp[p][rm];
    if(ret!=-1)return ret;
    ret=10000000000;
    if(rm-nm[p]>=0LL)
        ret=min(ret,a[p]+go(p,rm-nm[p]));
    ret=min(ret,go(p+1,rm));

   return ret;

}
int main()
{

 cin>>n;
 memset(ans,63,sizeof ans);
 for(int i=0;i<3;i++)cin>>a[i];

  for(LL i=0LL;i<=2000LL;i++){
  memset(dp,-1,sizeof dp);

     ans[i]=go(0,i);
  }
   n%=4LL;
   LL res=1000000000000LL;
   for(LL i=0;i<=2000LL;i++)
   {
       LL tmp=n+i;
       if(tmp%4LL==0LL)res=min(res,ans[i]);
   }

   cout<<res<<endl;

    return 0;
}



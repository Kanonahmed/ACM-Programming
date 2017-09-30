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
#define countbit(x) __builtin_popcountll((ll)x)
//File input/output
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
const LL inf=1000000000000000000;
LL aa[100005],n;
LL dp[100005][2];
string ss[2][100005];
LL go(int p,int lst)
{
    if(p==n-1)return 0;
    LL &rt=dp[p][lst];
    if(rt!=-1)return rt;
    rt=1000000000000000000;
    if(ss[lst][p]<=ss[0][p+1])rt=min(rt,go(p+1,0));
    if(ss[lst][p]<=ss[1][p+1])rt=min(rt,go(p+1,1)+aa[p+1]);
     return rt;
}
int main()
{
 cin>>n;
 for(int i=0;i<n;i++)cin>>aa[i];
 for(int i=0;i<n;i++){
    cin>>ss[0][i];
    string s=ss[0][i];
    reverse(s.begin(),s.end());
    ss[1][i]=s;
 }
   memset(dp,-1,sizeof dp);
   LL ans=min(go(0,0),go(0,1)+aa[0]);
    if(ans<inf)cout<<ans<<endl;
    else cout<<"-1"<<endl;



    return 0;
}



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
int n;
LL a[105],cl[105][105],k,d,m;
LL dp[105][105][105];
LL go(int pos,int pr,int ag)
{
   if(pos>n)
   {
       if(pr==0)return 0LL;
       else return 1000000000000000000LL;
   }
   LL &r1=dp[pos][pr][ag];
   if(r1!=-1)return r1;
   r1=1000000000000000000;
  if(a[pos]==0)
  {
      for(int i=1;i<=m;i++)
        r1=min(r1,cl[pos][i]+go(pos+1,pr-(ag!=i),i));
  }
  else r1=go(pos+1,pr-(ag!=a[pos]),a[pos]);
  return r1;

}
int main()
{
 cin>>n>>m>>d;
 set<int>s;
 for(int i=1;i<=n;i++)cin>>a[i];

  for(int i=1;i<=n;i++)
      for(int j=1;j<=m;j++)cin>>cl[i][j];

   memset(dp,-1,sizeof dp);

  if(go(1,d,0)>=1000000000000000000)cout<<"-1"<<endl;
  else cout<<go(1,d,0)<<endl;






    return 0;
}



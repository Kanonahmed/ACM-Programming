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

int month[]={-1,31,28,31,30,31,30,31,31,30,31,30,31};  //Not Leap Year
int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
//int dx[]={-1,-1,+0,+1,+1,+0};int dy[]={-1,+1,+2,+1,-1,-2}; //Hexagonal Direction
const double eps=1e-6;
int n,ps,f;
int dp[1010][1010][2];
int a[1000005];
int dfs(int p,int mod,int flag)
{
  if(p==n)
  {
      if(mod==0&&flag)return 1;
      return 0;
  }
  int &ptr=dp[p][mod][flag];
  if(ptr!=-1)return ptr;
  int r1=dfs(p+1,(mod+a[p])%ps,1);
  int r2=dfs(p+1,mod,flag);
  ptr=r1|r2;
  return ptr;
}
int main()
{
  cin>>n>>ps;
   for(int i=0;i<n;i++)
    cin>>a[i];
    if(n>ps){cout<<"YES"<<endl;return 0;}
    memset(dp,-1,sizeof dp);
   f=dfs(0,0,0);
   if(f)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
    return 0;
}


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
int n,m;
int a[262145],dp[262146];
int main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
      cin>>n>>m;
      int q=(1<<n);
      for(int i=0;i<q;i++)a[i]=1e9;
      for(int i=0;i<n;i++)
      {
          int x;
          cin>>x;
          a[1<<i]=x;
      }
      for(int i=1;i<=m;i++)
      {
          int y,x;
          scanf("%d %d",&x,&y);
          int mask=0;
          for(int j=1;j<=y;j++)
          {
              int z;
              scanf("%d",&z);
              z--;
              mask|=(1<<z);
          }
          a[mask]=min(a[mask],x);
      }

      for(int mask=q-1;mask>=0;mask--)
      {
          for(int i=0;i<n;i++)
          {
              if(mask&(1<<i))a[mask-(1<<i)]=min(a[mask-(1<<i)],a[mask]);
          }
      }
    for(int i=0;i<q;i++)dp[i]=1e9;
    dp[0]=0;

      for(int mask=0;mask<q;mask++)
      {
            int cur_mask=mask;
            while(cur_mask>0)
            {
                dp[mask]=min(dp[mask],dp[mask-cur_mask]+a[cur_mask]);
                cur_mask=(cur_mask-1)&mask;
            }
      }

        cout<<dp[(1<<n)-1]<<endl;
  }






    return 0;
}



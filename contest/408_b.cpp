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
int n,m,k;
int vis[2000005];
int achhe[2000005];
int main()
{
  cin>>n>>m>>k;
  for(int i=1;i<=m;i++)
  {
      int x;
      scanf("%d",&x);
      vis[x]=1;
  }
   int ans=1;
   int fl=0;
   achhe[1]=1;
  for(int i=1;i<=k;i++)
  {
      int x,y;
      scanf("%d %d",&x,&y);
      if(fl==0)
      {
          if(achhe[x])
          {
              achhe[x]=0;
              achhe[y]=1;
              if(vis[y])
              {
                  fl=1;
                  ans=y;
              }
              else ans=y;
          }
          else if(achhe[y])
          {
              achhe[y]=0;
              achhe[x]=1;
              if(vis[x])
              {
                  fl=1;
                  ans=x;
              }
              else ans=x;
          }
          else
          {
              int nothing;
          }
      }
  }

  if(vis[1])
  {
      cout<<"1"<<endl;
      return 0;
  }
 cout<<ans<<endl;


    return 0;
}


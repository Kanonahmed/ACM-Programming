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
LL  visx[100005],visy[100005];
bool  vx[100005],vy[100005];
int main()
{
  LL n,m;
  cin>>n>>m;
  for(int i=1;i<=n;i++){visx[i]=visy[i]=n;}
  LL s=n*n;
  LL tmp=n;
  LL nm=1LL;
  while(m--)
  {
      int x,y;
      scanf("%d %d",&x,&y);
//      //cout<<visx[x]<<" "<<visy[y]<<endl;
//      if(vx[x]||vy[y]){
//      LL sum=0LL;
//      LL p=visx[x]+visy[y]-1LL;
//      LL sb=s-p;
//      s=max(0LL,s-p);
//      //cout<<s<<" "<<p<<" "<<sb<<endl;
//      sum=max(sum,sb);
//      visx[x]=visy[y]=0LL;
//      visy[x]=max(0LL,visy[x]-1LL);
//      visx[y]=max(0LL,visx[y]-1LL);
//      vx[x]=vy[y]=1;
//      vx[y]=vy[x]=1;
//      printf("%lld\n",sum);
//      tmp=max(0LL,tmp-1LL);
//      }
//      else{

      LL sum=tmp*tmp;
      //cout<<sum<<endl;
      sum=sum-(2LL*tmp);
      sum-=nm;
      cout<<sum<<endl;
      sum=max(0LL,sum);
      tmp=max(0LL,tmp-nm);
      printf("%lld\n",sum);

      nm++;
      //cout<<tmp<<" "<<nm<<endl;
      //vx[x]=vy[y]=1;
      //vx[y]=vy[x]=1;
      //}
  }



    return 0;
}



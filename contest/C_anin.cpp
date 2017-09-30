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
const LL N=10000000;
LL pr[700000],k;
bool vis[10000010];
void seive()
{
    for(LL i=3;i<=N;i+=2)
    {
        if(!vis[i])
        {
            pr[++k]=i;
            for(LL j=2*i;j<=N;j+=i)vis[j]=1;
        }
    }
    pr[0]=2;
}
int main()
{
    seive();
  int tc,t=1;
  cin>>tc;
  while(tc--)
  {
      LL n,res=1;
      cin>>n;
      for(LL i=0;pr[i]<=sqrt(n)&&i<=k;i++)
      {

          if(n%pr[i]==0)
          {
              LL c=0;
              while(n%pr[i]==0)
              {
                  c++;
                  n/=pr[i];
              }
              res*=(2*c+1);
          }
      }
      if(n>1)res*=3;
      res=res/2+1;
      printf("Case %d: %lld\n",t++,res);
  }

    return 0;
}


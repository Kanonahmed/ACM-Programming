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
const LL N=1000000;
const LL MD= 1000000007;
LL pr[N+100],vis[N+100],k;
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
  //cout<<k<<endl;
  int tc,t=1;
  cin>>tc;
  while(tc--)
  {
      LL n,p,res=1;
      cin>>n>>p;
      for(LL i=0;pr[i]<=sqrt(n);i++)
      {
          if(n%pr[i]==0)
          {
              LL c=0;
              while(n%pr[i]==0)
              {
                  c++;
                  n/=pr[i];
              }
              LL up=bigmod(pr[i],(c*p)+1,MD);
              up=((up-1)%MD+MD)%MD;
              LL down=modinverse(pr[i]-1,MD);
              LL total=(up*down)%MD;
              res=(res*total)%MD;
          }
      }
      if(n>1){
              LL up=bigmod(n,(p+1),MD);
              up=((up-1)%MD+MD)%MD;
              LL down=modinverse(n-1,MD);
              LL total=(up*down)%MD;
              res=(res*total)%MD;
      }
      printf("Case %d: %lld\n",t++,res);
  }

    return 0;
}


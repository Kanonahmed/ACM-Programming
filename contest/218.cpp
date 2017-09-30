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
const int MX=2*100005;
int rep[MX];
int wt[MX];
int cp[MX];
int n,q;
int dsu(int n)
{
    if(rep[n]==n)return n;
    else return rep[n]=dsu(rep[n]);
}
int main()
{
  scanf("%d",&n);
  f1(i,n)rep[i]=i;

  f1(i,n)
  scanf("%d",&cp[i]);
  scanf("%d",&q);
  while(q--)
  {
      int op;
      scanf("%d",&op);
      if(op==2)
      {
          int x;
          scanf("%d",&x);
          printf("%d\n",wt[x]);
      }
      else
      {
          int ind,x;
          scanf("%d %d",&ind,&x);
          wt[ind]+=x;
          int p=ind;
          while(wt[p]>cp[p])
          {   int w=wt[p]-cp[p];
              if(p+1>n){wt[p]=cp[p];break;}
              int u=dsu(p+1);
              wt[p]=cp[p];
              rep[p]=u;
              p=u;
              wt[p]+=w;
          }
      }
  }




    return 0;
}


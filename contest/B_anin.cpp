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
const LL MD=1000000007;
int main()
{
   int tc;
   cin>>tc;
   while(tc--)
   {
       int n;
       LL v,p[100005],q[100005],l[100005],a0,a1,b0,b1,c0,c1,m0,m1;

       scanf("%lld%d",&v,&n);

       cin>>p[0]>>p[1]>>a0>>b0>>c0>>m0;
       cin>>q[0]>>q[1]>>a1>>b1>>c1>>m1;
        // equation build krlam........
       for(int i=2;i<n;i++)
       {
           p[i]=((((a0*a0)%m0*p[i-1])%m0+(b0*p[i-2])%m0)%m0+c0)%m0;
           q[i]=((((a1*a1)%m1*q[i-1])%m1+(b1*q[i-2])%m1)%m1+c1)%m1;
       }
      // di-mention build krlam......
       for(int i=0;i<n;i++)
       {
           l[i]=p[i]*m1+q[i]+1;
       }
       // power k mod korci
       LL f=1;
       for(int i=0;i<n;i++)
       {
           if(v%MD)
           {
           LL tmp=(l[i]-1)%(MD-1);
           f=(f*tmp)%(MD-1);
           }
            else if(l[i]==1||l[i]==0)
           {
               f=0;
               break;
           }
       }

       if(f==0)printf("1\n");
       else if(v%MD==0)printf("0\n");
       else{
       v=v%MD;
       LL res=bigmod(v,f,MD);
       cout<<res<<endl;
       }
   }

    return 0;
}


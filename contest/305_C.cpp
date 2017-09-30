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
int main()
{


LL m;
  cin>>m;
  LL h1,a1,x1,y1;
  LL h2,a2,x2,y2;
  cin>>h1>>a1>>x1>>y1;
  cin>>h2>>a2>>x2>>y2;
  LL sum1;
  sum1=(x1*h1+y1)%m;
  LL sum2;
  sum2=(x2*h2+y2)%m;
  if(sum1==a1&&sum2==a2)
  {
      cout<<"1"<<endl;
      return 0;
  }
  for(LL i=2;i<=1000000;i++)
  {
       sum1=(x1*sum1+y1)%m;
       sum2=(x2*sum2+y2)%m;
       if(sum1==a1&&sum2==a2)
       {
           cout<<i<<endl;
           return 0;
       }
  }

  cout<<"-1"<<endl;

    return 0;
}


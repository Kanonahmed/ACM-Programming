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
int main()
{
  int n;
  int ans[2*100005];
  int a[2*100005];
  int lft[2*100005];
  int rgt[2*100005];
  cin>>n;
  f1(i,n)cin>>a[i];
  /* position i is min for left side x and right side y then the min of size (y-x+1)=a[i]   */
  stack<int>stk;
  stk.push(0);
  a[0]=0;
  f1(i,n)
  {
      while(!stk.empty()&& a[stk.top()]>=a[i])stk.pop();
      lft[i]=stk.top()+1;
      stk.push(i);
  }
  while(!stk.empty())stk.pop();
  stk.push(n+1);
  a[n+1]=0;
  for(int i=n;i>=1;i--)
  {
      while(!stk.empty()&& a[stk.top()]>=a[i])stk.pop();
      rgt[i]=stk.top()-1;
      ans[rgt[i]-lft[i]+1]=max(ans[rgt[i]-lft[i]+1],a[i]);  //store max for size
      stk.push(i);
  }
  for(int i=n-1;i>=1;i--)ans[i]=max(ans[i],ans[i+1]); // if i calculate 10 then just compare with 9

  f1(i,n)cout<<ans[i]<<" ";
    return 0;
}

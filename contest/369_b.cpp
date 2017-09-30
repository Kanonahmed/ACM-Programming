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
//File input/output
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
LL a[505][505],n,sum,id,idd;
int ok(LL vl)
{
    a[id][idd]=vl;
    LL res=0;
    for(int i=0;i<n;i++)
    {
        res=0;
        for(int j=0;j<=n;j++)res+=a[i][j];
        if(res>sum) return -1;
        if(res<sum) return 1;
        res=0;
        for(int j=0;j<n;j++)res+=a[j][i];
        if(res>sum) return -1;
        if(res<sum) return 1;
    }
     res=0;
     for(int k=0;k<n;k++)res+=a[k][k];
     if(res>sum) return -1;
     if(res<sum) return 1;
     res=0;
     for(int k=n-1,l=0;k>=0;k--,l++)
     res+=a[k][l];
     if(res>sum) return -1;
     if(res<sum) return 1;

     return 2;
}
int main()
{
   cin>>n;
   for(int i=0;i<n;i++)
    for(int j=0;j<n;j++){scanf("%lld",&a[i][j]);if(a[i][j]==0){id=i;idd=j;}}

     //cout<<id<<" "<<idd<<endl;
     if(n==1){cout<<"1"<<endl;return 0;}
     for(int i=0;i<n;i++)
     if(i!=id){
            for(int j=0;j<n;j++)sum+=a[i][j];
            break;
     }
    // cout<<sum<<endl;

      LL lo=1,hi=1000000000000000002;
     while(lo<=hi)
     {
         LL mid=(lo+hi)/2LL;
         //cout<<mid<<endl;
         if(ok(mid)==2)
         {
             cout<<mid<<endl;
             return 0;
         }
         else if(ok(mid)==-1)
            hi=mid-1LL;
          else
          {
              lo=mid+1LL;
          }
     }

  cout<<"-1"<<endl;



    return 0;
}



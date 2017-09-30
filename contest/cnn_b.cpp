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
int ax[100005],ay[100005];
struct data
{
    LL p,q,u;
    data(LL x,LL y,int m){p=x;q=y;u=m;}
    bool operator<(const data &pp)const
    {
        if(q<pp.q)return true;
        else if(p<pp.p&&q==pp.q)return true;
        else return false;
    }
};
int main()
{
  int n;
  cin>>n;
  vector<data>v;
  int ch=0,l;
  for(int i=0;i<n;i++)
  {
      LL x,y;
      cin>>x>>y;
      //if(x>=0&&y>0&&){ch=1;l=i+1;}
      v.push_back(data(x,y,i+1));

  }
  sort(v.begin(),v.end());
 //cout<<l<<" "<<v[0].u;
 for(int i=2;i<v.size();i++)
 {
     //if(v[0].q<v[i].p){cout<<v[i].u<<endl;break;}
     //cout<<v[i].p<<" "<<v[i].q<<" "<<
     LL are=v[0].p*(v[1].q-v[i].q)+v[0].q*(v[i].p-v[1].p)+1*(v[1].p*v[i].q-v[i].p*v[1].q);
     if(are)
     {
         cout<<v[0].u<<" "<<v[1].u<<" "<<v[i].u<<endl;
         break;
     }
 }

    return 0;
}


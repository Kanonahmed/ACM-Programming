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
   LL a[100005];
   LL ap[100005];
   LL aq[100005];
   LL ar[100005],q,r;
   LL tree[3*100005];
   LL  init(int node,int b,int e)
{
    if(b==e)
    {
        return tree[node]=a[b]*r;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    tree[node]=max(init(left,b,mid),init(right,mid+1,e));
    return tree[node];
}
LL query(int node,int b,int e,int i,int j)
{
    if(i>e||j<b)return -1000000000000000002LL;
    if(i<=b&&j>=e)return tree[node];
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    LL p=max(query(left,b,mid,i,j),query(right,mid+1,e,i,j));
    return p;
}
int main()
{

   LL n,p;
   cin>>n>>p>>q>>r;
   for(int i=0;i<n;i++)
    scanf("%lld",&a[i]);
    init(1,0,n-1);

    for(int i=0;i<n;i++)
    {
        aq[i]=q*a[i];
        if(i==0)ap[i]=p*a[i];
        else {ap[i]=max(ap[i-1],p*a[i]);}
    }
    LL sum=-1000000000000000002LL;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
             sum=ap[i]+aq[i]+query(1,0,n-1,0,n-1);
        }
        else{
            LL tmp=ap[i]+aq[i]+query(1,0,n-1,i,n-1);
            sum=max(sum,tmp);
        }

    }

  cout<<sum<<endl;

    return 0;
}


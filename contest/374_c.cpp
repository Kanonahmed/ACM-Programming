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
vector<pair<int , int> >v[5005];
vector<int>ans;
int prr[5005];
int n;
LL dp[5005][5005];
LL go(int u,int k)
{
    if(u==n && k==0) return 0;

    LL &rt = dp[u][k];
    //if(rt!=-1)return rt;

     if(rt!=-1)return rt;
      rt= 1LL<<60;
     if(k>0){

    for(int i=0;i<v[u].size();i++)
    {
        int cur=v[u][i].first,c=v[u][i].second;
        rt=min(rt,go(cur,k-1)+c);
    }
         }
    return rt;
}

 void ok(int u,int k)
 {
      printf("%d ",u);
     if(k==0)
     {
         return;
     }

    for(int i=0;i<v[u].size();i++)
    {
        int cur=v[u][i].first;
        int vl=v[u][i].second;
        if(go(u,k)==(go(cur,k-1)+vl))
        {
            ok(cur,k-1);
            return ;
        }
    }

 }
int main()
{
 int m,t;
 cin>>n>>m>>t;
  for(int i=0;i<m;i++)
  {
      int x,y;
      int c;
      scanf("%d %d %d",&x,&y,&c);
      v[x].push_back({y,c});
  }
    memset(dp,-1,sizeof dp);

    for(int i=n;i>=0;i--)
        if(go(1,i)<=(LL)t)
        {
            cout<<i+1<<endl;
            ok(1,i);
            break;
        }



    return 0;
}



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
int main()
{
  int tc,ks=1;
  cin>>tc;
  while(tc--)
  {
      int n,m;
      scanf("%d %d",&n,&m);
      LL dp1[10015],dp2[10012];
      LL a[10012],b[10012];
      queue< pair<LL,LL> >q1,q2;
      for(int i=0;i<n;i++)cin>>dp1[i];//scanf("%lld",&dp1[i]);
      for(int i=0;i<m;i++)cin>>dp2[i];//scanf("%lld",&dp2[i]);

   memset(a,0,sizeof a);
   memset(b,0,sizeof b);

   for(int i=n-1;i>=0;i--)a[i]+=a[i+1]+dp1[i];
   for(int i=m-1;i>=0;i--)b[i]+=b[i+1]+dp2[i];


      for(int j=0;j<n;j++)q1.push({dp1[j],a[j]});

      for(int j=0;j<m;j++)q2.push({dp2[j],b[j]});


       LL pr=0LL,ans=0LL;
       int ch=0;
      while(!q1.empty()&&!q2.empty())
      {
          LL p1=q1.front().first;
          LL p2=q2.front().first;
          if(p1<p2)
          {
              ans+=pr;
              pr=p1;
              q1.pop();
          }
          else
          {
              LL np1=q1.front().second;
              LL np2=q2.front().second;
              int l=q1.size();
              if(np1<=np2&&l>1)
              {
              ans+=pr;
              pr=p1;
              q1.pop();
              }
              else
              {
              ans+=pr;
              pr=p2;
              q2.pop();
              }

          }
//          else
//          {
//              ans+=pr;
//              pr=p2;
//              q2.pop();
//          }
      }
      while(!q1.empty())
      {
          ans+=pr;
          pr=q1.front().first;
          q1.pop();
      }
      while(!q2.empty())
      {
          ans+=pr;
          pr=q2.front().first;
          q2.pop();
      }


      //printf("Case %d: %lld\n",ks++,ans);
      cout<<"Case "<<ks++<<": "<<ans<<endl;
  }






    return 0;
}



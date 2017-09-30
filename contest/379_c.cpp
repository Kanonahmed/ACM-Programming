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
LL a[2000002],a1[2000002];
LL b[2000002],b1[2000002];
LL st[2000002];
pair<LL,LL> v[2000002];
int main()
{
  LL n,m,k;
  cin>>n>>m>>k;
  LL x,s;
  cin>>x>>s;
  LL ans=x*n;
  for(int i=1;i<=m;i++)scanf("%lld",&a[i]);
  for(int i=1;i<=m;i++)scanf("%lld",&a1[i]);

  for(int i=1;i<=m;i++)
  v[i-1]={a1[i],a[i]};


  sort(v,v+m);
  st[0]=v[0].second;
  for(int i=1;i<m;i++)st[i]=min(st[i-1],v[i].second);

   for(int i=1;i<=m;i++)
      if(a1[i]<=s)ans=min(ans,a[i]*n);

  for(int i=1;i<=k;i++)scanf("%lld",&b[i]);
  for(int i=1;i<=k;i++)scanf("%lld",&b1[i]);

  for(int i=1;i<=k;i++)
    if(b1[i]<=s)
      if(b[i]>=n)ans=0LL;

      //for(int i=0;i<m;i++)
        //cout<<st[i]<<" "<<v[i].first<<" "<<v[i].second<<endl;

     //cout<<s<<endl;
      for(int i=1;i<=k;i++)
      {
          //cout<<b1[i]<<endl;
          if(b1[i]>s)break;
          else
          {
              //cout<<"o"<<endl;
              LL lo=0LL,hi=m-1LL;
              LL vl=s-b1[i];
              LL lg=n-b[i];
              lg=max(lg,0LL);
              int k=0;
              //cout<<vl<<" "<<lg<<endl;
              //cout<<lo<<" "<<hi<<endl;
              while(lo<=hi)
              {
                  LL md=(lo+hi)/2LL;
                  //cout<<md<<endl;
                  LL chk=v[md].first;
                  //cout<<md<<" "<<chk<<" "<<vl<<endl;
                  if(chk<=vl)
                  {
                      //cout<<md<<endl;
                      ans=min(ans,lg*st[md]);
                      lo=md+1LL;
                  }
                  else hi=md-1LL;
                  k++;
                  //if(k>=1000)break;
              }
          }
      }






  cout<<ans<<endl;







    return 0;
}



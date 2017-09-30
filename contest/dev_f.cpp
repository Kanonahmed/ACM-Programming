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
string s;
bool ok(LL p)
{
    map<char ,int>mp;
    mp['M']=1;
    mp['T']=2;
    mp['J']=3;
    mp['F']=4;
    int cnt[10]={0};
    int nt=0;
    int n=s.size();
    for(int i=0;i<p;i++)
    {
        if(!cnt[mp[s[i]]])
        {
            nt++;
            cnt[mp[s[i]]]++;
        }
        else  cnt[mp[s[i]]]++;

        if(nt==4)return 1;
    }
    for(int i=p;i<n;i++)
    {
        cnt[mp[s[i-p]]]--;
        if(!cnt[mp[s[i-p]]])nt--;

        if(!cnt[mp[s[i]]])
        {
            nt++;
            cnt[mp[s[i]]]++;
        }
        else  cnt[mp[s[i]]]++;

        if(nt==4)return 1;
    }
   return 0;
}
int main()
{

  int tc;
  cin>>tc;
  while(tc--)
  {
      int n;
      cin>>n;
      cin>>s;
       LL lo=0,hi=n;
       LL ans=n;
       while(lo<=hi)
       {
           LL m=(lo+hi)/2LL;
           if(ok(m))
           {
               ans=min(ans,m);
               hi=m-1LL;
           }
           else lo=m+1;
       }
       cout<<ans<<endl;
  }





    return 0;
}



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
string s[55];
int cnt[55][27],len;
int go(string a, string b)
{
    int cost=0;
    for(int i=0;i<len;i++)
    {
        if(a!=b)
        {
            cost++;
            char cr=b[0];
             string p="";
             for(int k=1;k<len;k++)p+=b[k];
             p+=cr;
             b=p;
            //cout<<b<<endl;
        }
        else break;
    }
    if(a==b)return cost;
    else return -1;
}
int main()
{

  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
      cin>>s[i];
      len=s[i].size();
      for(int j=0;j<s[i].size();j++)cnt[i][s[i][j]-'a']++;
  }
  for(int i=0;i<26;i++)
  {
      int cz=cnt[1][i];
      for(int j=1;j<=n;j++)
      {
          if(cz!=cnt[j][i]){
            cout<<"-1"<<endl;
            return 0;
          }
      }
  }

  int ans=900000000;

  for(int i=1;i<=n;i++)
  {
      int cost=0,chec=0;
      for(int j=1;j<=n;j++)
      {
          if(s[i]!=s[j])
          {
              //cout<<s[j]<<endl;
              int rep=go(s[i],s[j]);
              if(rep<0){chec=1;break;}
              else cost+=rep;
          }
      }
      if(!chec)
        ans=min(ans,cost);
  }


  if(ans==900000000)cout<<"-1"<<endl;
  else
  cout<<ans<<endl;


    return 0;
}

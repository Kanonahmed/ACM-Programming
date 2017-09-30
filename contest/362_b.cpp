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
int main()
{
    cin>>s;
    int sm,ch=-1;
    for(int i=s.size()-1; i>=0; i--)
    {
        if(s[i]=='e')
        {
            sm=0;
            ch=i;
            for(int j=i+1; j<s.size(); j++)
                sm=sm*10+(s[j]-'0');
            break;
        }
    }
    int cn=0;
    string ss="";
    if(!sm)
    {
        for(int i=0; i<ch; i++)
        {
            ss+=s[i];
        }
    }
    else{
        for(int i=0; i<ch; i++)
        {
            if(i>2)cn++;

            if(s[i]=='.')continue;
            if(cn==sm)
            {
                ss+=".";
                ss+=s[i];
            }
            else ss+=s[i];
        }
    }
   int chh=0;
   for(int i=2;i<ss.size();i++)if(ss[i]!='0')chh=1;

  if(!chh&&!sm){cout<<ss[0]<<endl;return 0;}

for(int i=0;i<max((LL)ss.size(),sm+1LL);i++)
    if(i<ss.size())cout<<ss[i];
    else cout<<"0";

    return 0;
}



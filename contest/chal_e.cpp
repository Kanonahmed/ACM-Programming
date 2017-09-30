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
string s[13]={"Poush","Magh","Falgun","Chaitra","Baishakh","Jaishtha","Ashar","Sraban","Bhadra","Ashwin","Kartik","Agrahayan"};
int mm[]={-1,30,30,30,30,31,31,31,31,31,30,30,30};
int main()
{
   int tc,ks=1;
   cin>>tc;
  while(tc--)
  {
     int d,m,y,leap=0;
     cin>>d>>m>>y;
     if(y%4==0&&y%100)leap=1;
     else if(y%100==0&&y%400)leap=1;
      int sum=0;
      for(int i=1;i<m;i++)sum+=month[i];
      sum+=d;
      if(leap&&m>2)sum+=1;
      int gm=sum+17;
    int fx;
    if(leap)fx=gm%366;
    else fx=gm%365;
    int ll=0;
    printf("Case %d: ",ks++);
    for(int i=1;i<=12;i++)
    {
        if(fx-(ll+mm[i])==0)
        {
            cout<<mm[i]<<" "<<s[i-1]<<" ";break;
           // printf("%d %s ",mm[i],s[i-1]);break;
        }
        else if(fx<(ll+mm[i]))
        {
            int ggg=(ll+mm[i])-fx;
            //if()
            cout<<mm[i]-ggg<<" "<<s[i-1]<<" ";break;
           // printf("%d %s ",mm[i]-ggg,s[i-1]); break;
        }
        else
        {
            if(i==3&&leap)ll+=31;
            else
            ll+=mm[i];

        }
    }
    //cout<<gm%365<<endl;
    int hh;
    if(leap)
     hh=y-594+(gm/366);
    else hh=y-594+(gm/365);
   //cout<<hh<<endl;
   printf("%d\n",hh);
  }
    return 0;
}


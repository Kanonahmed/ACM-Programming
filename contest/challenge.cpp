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
const int MX=1005;
int pr[1005],k,dp[1000001];
bool vis[1005];
void sev()
{
    k=1;
    pr[0]=2;
    for(int i=3;i<=MX;i+=2)
    {
        if(!vis[i])
        {
            pr[k++]=i;
            for(int j=i*i;j<=MX;j+=2*i)vis[j]=1;
        }
    }
    int ch=0;
    dp[1]=1;
    for(int i=2;i<=1000000;i++)
    {
        int n=i,cnt=0;
        int q=sqrt(n);
         for(int j=0;pr[j]<=q&&j<k;j++)
         {
             if(n%pr[j]==0)
             {
                 while(n%pr[j]==0)n/=pr[j];
                 cnt++;
             }
             q=sqrt(n);
         }
         if(n>1)cnt++;
         double ln=log10(i);
         ln=ceil(ln);
         n=i;
         while(n%10==0)n/=10;
         if(n==1)ln++;

         //if(ch<11){cout<<i<<" "<<cnt<<" "<<ln<<endl;ch++;}
         if(ln==cnt)dp[i]=dp[i-1]+1;
         else dp[i]=dp[i-1];
    }
}
int main()
{
  sev();
   int tc,ks=1;
   scanf("%d",&tc);
   while(tc--)
   {
     int a,b;
     scanf("%d %d",&a,&b);
     printf("%d\n",dp[b]-dp[a-1]);
   }

    return 0;
}


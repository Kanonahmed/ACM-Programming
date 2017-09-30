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
int a[1000002];
int main()
{
  int n,k;
  cin>>n>>k;
  priority_queue<int>q;
  for(int i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(int i=0;i<k;i++)
  {
      int x;
      scanf("%d",&x);
      q.push(-1*x);
  }
//cout<<q.top()<<endl;
   int rm=0;
   while(!q.empty()&&-1*q.top()==0)
   {
       rm++;
       q.pop();
   }
   //cout<<endl;
   int ans=0;
   for(int i=0;i<n;i++)
   {
       //cout<<rm<<" "<<q.size()<<" por ";
       if(rm==0&&q.size()==0)break;
       ans++;
       int c=0;
       int u;
       if(q.size())
       {
           c=1;
           u=-1*q.top();
       }

       if(a[i])
       {
           if(rm)rm--;
           else
            {
                if(c){
                        q.pop();
               u--;
               if(u==0)rm++;
               else q.push(-1*u);
                }
           }
       }
       else
       {
           if(c){
                q.pop();
           u--;
           if(u==0)rm++;
           else q.push(-1*u);
           }
       }
      //cout<<rm<<" "<<q.size()<<endl;
   }
  int ch=1;
  if(q.empty())ch=0;

  if(ch==0&&rm==0)
  {
      cout<<ans<<endl;
  }
  else cout<<"-1"<<endl;




    return 0;
}



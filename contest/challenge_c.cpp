
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
vector<int>graph[2][1000001];
bool vis[2][1000001];
LL ds[2][1000001];
int n;
LL go()
{

    memset(ds,126,sizeof ds);
    queue<pair<int,int> >q;
    q.push({0,1});
    vis[0][1]=1;
    ds[0][1]=0;
    while(!q.empty())
    {
          int chk=q.front().first;
          int u=q.front().second;
          q.pop();
          if(vis[chk^1][u]==0)
          {
              vis[chk^1][u]=1;
              ds[chk^1][u]=ds[chk][u]+1;
              q.push({chk^1,u});
          }
          for(int i=0;i<graph[chk][u].size();i++)
          {
              int v=graph[chk][u][i];
              int cs=ds[chk][u]+1;
              if(vis[chk^1][v]==0||ds[chk^1][v]>cs)
              {
                  vis[chk^1][v]=1;
                  ds[chk^1][v]=cs;
                  q.push({chk^1,v});
              }
          }

    }
    return min(ds[0][n],ds[1][n]);
}
int main()
{
   int e,q;
   scanf("%d %d %d",&n,&e,&q);
   for(int i=0;i<e;i++)
   {
       int x,y;
       scanf("%d %d",&x,&y);
       graph[0][x].push_back(y);
       graph[1][y].push_back(x);
   }
    LL res=go();
    while(q--)
    {
        LL tm;
        scanf("%lld",&tm);
        if(tm>=res)printf("GGMU\n");
        else printf("FML\n");
    }

    return 0;
}



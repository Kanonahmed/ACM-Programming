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
int main()
{

   ios_base::sync_with_stdio(0); cin.tie(0);
    int tc;
    cin>>tc;
    while(tc--)
    {
       int m,n,f[30],vis[30][30],l=0,tm[30];
       map<string,int>mp;
       string s;
       cin>>m>>n>>s;
       if(mp.find(s)==mp.end()){mp[s]=l;l++}
       vector<string>v[30];
       for(int i=0;i<5;i++)
       {
           cin>>koi[i];
           for(int j=0;j<koi[i];j++)
           {
               string ss;
               cin>>ss;
               if(mp.find(ss)==mp.end()){mp[ss]=l;l++;}
               v[i].push_back(ss);
           }
       }
       tm[mp[s]]=min(m,n);
       int cur=min(m,n);
       string nw=s;
       while(cur<n)
       {

           for(int i=0;i<5;i++)
           {
               int f=0;
               for(int j=0;j<koi[i];j++)
               {
                   if(mp[nw]==mp[v[i][j]]){f=1;break;}
               }
               if(!f)
               {
                   if(vis[i][koi[i]-1]){for(int u=0;u<koi[i];u++)vis[i][u]=0;vis[i][0]=1;nw=v[i][0];}
                   else
                   {
                       for(int u=0;u<koi[i];u++)
                       {
                           if(!vis[i][i]){vis[i][u]=1;nw=v[i][u];break;}
                       }
                   }
               }
           }
           cur+=2;
           if(cur<n)
           {tm[mp[nw]]+=min(m,n-cur);cur+=min(m,n-cur);}
       }



    }





    return 0;
}


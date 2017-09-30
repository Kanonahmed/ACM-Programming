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

int month[]={-1,31,28,31,30,31,30,31,31,30,31,30,31};  //Not Leap Year
int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
//int dx[]={-1,-1,+0,+1,+1,+0};int dy[]={-1,+1,+2,+1,-1,-2}; //Hexagonal Direction
const double eps=1e-6;
int n,m;
string s[55];
int vis[1000];
int main()
{
 cin>>n>>m;
 for(int i=0;i<n;i++)
  cin>>s[i];
 if(n<2||m<2){cout<<"0"<<endl;return 0;}
 int ans=0;
  for(int i=0;i<n-1;i++)
  {
      int f='f';
      int a='a';
      int c='c';
      int e='e';
      for(int j=0;j<m-1;j++)
      {
           if(s[i][j]=='f'||s[i][j]=='a'||s[i][j]=='c'||s[i][j]=='e')
           vis[s[i][j]]=1;
           if(s[i+1][j]=='f'||s[i+1][j]=='a'||s[i+1][j]=='c'||s[i+1][j]=='e')
           vis[s[i+1][j]]=1;
           if(s[i][j+1]=='f'||s[i][j+1]=='a'||s[i][j+1]=='c'||s[i][j+1]=='e')
           vis[s[i][j+1]]=1;
           if(s[i+1][j+1]=='f'||s[i+1][j+1]=='a'||s[i+1][j+1]=='c'||s[i+1][j+1]=='e')
            vis[s[i+1][j+1]]=1;
          if(vis[f]&&vis[a]&&vis[c]&&vis[e])
          {
              ans++;
              memset(vis,0,sizeof vis);
          }
          else
          {
              memset(vis,0,sizeof vis);
          }
      }
  }

cout<<ans<<endl;


    return 0;
}


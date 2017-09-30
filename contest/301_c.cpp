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
int dx[]={0,0,1,-1};int dy[]={1,-1,0,0}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
//int dx[]={-1,-1,+0,+1,+1,+0};int dy[]={-1,+1,+2,+1,-1,-2}; //Hexagonal Direction
const double eps=1e-6;
char s[501][501];
int r,c;
void DFS(int x,int y)
{
        f0(i,4)
        {
            int tx=x+dx[i];
            int ty=y+dy[i];
           if((tx>=1&&tx<=r)&&(ty>=1&&ty<=c)&&s[tx][ty]=='.')
            {
            s[tx][ty]='n';
            DFS(tx,ty);
            }
        }
}
int main()
{
 cin>>r>>c;
   f1(i,r)
   {
       f1(j,c)cin>>s[i][j];
   }
   int fs,ss,fn,fnl;
   cin>>fs>>ss>>fn>>fnl;

    DFS(fs,ss);
    if(s[fn][fnl]=='.'){cout<<"NO"<<endl;return 0;}
    int cnt=0;
  if(s[fn][fnl]=='n')
  {
      bool chk=false;
      f0(i,4)
      {
          int tx=fn+dx[i];
          int ty=fnl+dy[i];
        if((tx>=1&&tx<=r)&&(ty>=1&&ty<=c)&&s[tx][ty]!='X')cnt++;
          if(tx==fs&&ty==ss)chk=true;
      }
      if(cnt>=2){cout<<"YES"<<endl;return 0;}
      if(cnt==1&&chk) {cout<<"YES"<<endl;return 0;}
      cout<<"NO"<<endl; return 0;
  }
  if(s[fn][fnl]=='X')
  {
      cnt=0;
      bool chk=false;
      f0(i,4)
      {
          int tx=fn+dx[i];
          int ty=fnl+dy[i];
          if((tx>=1&&tx<=r)&&(ty>=1&&ty<=c)&&s[tx][ty]!='X')cnt++;
          if(s[tx][ty]=='n'||(tx==fs&&ty==ss))chk=true;
      }
      if(chk)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
  }

    return 0;
}


#include<bits/stdc++.h>
using namespace std;
#define xx              first
#define yy              second
#define pb              push_back;
#define mp              make_pair
#define LL              long long
#define PI              acos(-1.0)
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
     |          Scratch where itches          |
      ----------------------------------------   */

int month[]={-1,31,28,31,30,31,30,31,31,30,31,30,31};  //Not Leap Year
int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
//int dx[]={-1,-1,+0,+1,+1,+0};int dy[]={-1,+1,+2,+1,-1,-2}; //Hexagonal Direction
const double eps=1e-6;
int a[102],b[102];
int n,m;
int dp[102][102];
int LCS(int i,int j)
{
    if(i>=n||j>=m)return 0;
    int &ptr=dp[i][j];
    if(ptr!=-1)return ptr;
    ptr=0;
    if(a[i]==b[j])ptr=1+LCS(i+1,j+1);
    else
    {
        ptr=max(ptr,LCS(i,j+1));
        ptr=max(ptr,LCS(i+1,j));
    }
    return ptr;
}
int main()
{
    int tc=1;
   while(cin>>n>>m)
   {
       if(n==0&&m==0)break;
       for(int i=0;i<n;i++)cin>>a[i];
       for(int i=0;i<m;i++)cin>>b[i];
       memset(dp,-1,sizeof dp);
       int t=LCS(0,0);
       printf("Twin Towers #%d\n",tc);
       printf("Number of Tiles : %d\n\n",t);
       tc++;

   }





    return 0;
}


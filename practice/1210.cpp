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

template <class T> inline T bigmod(T p,T e,T M)
{
    LL ret = 1;
    for(; e > 0; e >>= 1)
    {
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    }
    return (T)ret;
}
template <class T> inline T gcd(T a,T b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
template <class T> inline T modinverse(T a,T M)
{
    return bigmod(a,M-2,M);
}

/*    ----------------------------------------
     |    Scratch where itches----KANON       |
      ----------------------------------------   */

int month[]= {-1,31,28,31,30,31,30,31,31,30,31,30,31}; //Not Leap Year
int dx[]= {1,0,-1,0};
int dy[]= {0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
//int dx[]={-1,-1,+0,+1,+1,+0};int dy[]={-1,+1,+2,+1,-1,-2}; //Hexagonal Direction
const double eps=1e-6;
int prim[1000000];
int vis[1000000];
int k;
void seive()
{
    prim[0]=2;
    for(int i=3; i<=10000; i+=2)
    {
        if(!vis[i])
        {
            prim[++k]=i;
            for(int j=2*i; j<=10000; j+=i)vis[j]=1;
        }
    }
    //for(int i=0;i<=k;i++)cout<<prim[i]<<" ";
}
int main()
{
    seive();
    int n;
    while(cin>>n&&n)
    {
        int cnt=0;
        for(int i=0; i<=k&&prim[i]<=n; i++)
        {
            if(n==prim[i])
            {
                cnt++;
                break;
            }
            int sum=0;
            for(int j=i; j<=k; j++)
            {
                sum+=prim[j];
                if(sum>n)break;
                else if(sum==n)
                {
                    cnt++;
                    break;
                }
            }
        }
        cout<<cnt<<endl;
    }


    return 0;
}


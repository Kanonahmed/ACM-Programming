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
     |         Scratch where itches           |
      ----------------------------------------   */

int month[]= {-1,31,28,31,30,31,30,31,31,30,31,30,31}; //Not Leap Year
int dx[]= {1,0,-1,0};
int dy[]= {0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
//int dx[]={-1,-1,+0,+1,+1,+0};int dy[]={-1,+1,+2,+1,-1,-2}; //Hexagonal Direction
const double eps=1e-6;
const int N=100000;
int s[N+5],b[N+5];
pair<int,int>pr[N+5],qr[N+5];
int main()
{
    int n,sp;
    cin>>n>>sp;
    for(int i=0; i<n; i++)
    {
        char c;
        int x,y;
        cin>>c>>x>>y;
        if(c=='S')s[x]+=y;
        else b[x]+=y;
    }
    int k=0;
    for(int i=0; i<=N; i++)if(s[i])
        {
            pr[k].first=i;
            pr[k].second=s[i];
            k++;
        }
    int kk=0;
    for(int i=0; i<=N; i++)if(b[i])
        {
            qr[kk].first=i;
            qr[kk].second=b[i];
            kk++;
        }
    sort(pr,pr+k);
    sort(qr,qr+kk);
    int cnt=0;
    k=min(k,sp);
    for(int i=k-1; i>=0; i--)
    {
       cout<<"S "<<pr[i].first<<" "<<pr[i].second<<endl;
        cnt++;
        if(cnt==sp)break;
    }
    cnt=0;
    for(int i=kk-1; i>=0; i--)
    {
        cout<<"B "<<qr[i].first<<" "<<qr[i].second<<endl;
        cnt++;
        if(cnt==sp)break;
    }

    return 0;
}

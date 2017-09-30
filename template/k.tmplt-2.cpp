#include<bits/stdc++.h>
using namespace std;
#define PI             2*acos(0.0)
#define DEG_to_REDI(X) (X*PI/180)
#define REDI_to_DEG(X) (180*X/(PI))
#define inf            INT_MAX
#define pb(X)          push_back(X)
#define scs(s)         getline(cin, s)
#define set0(a)        memset(a,0,sizeof(a))
#define clr(a)         a.clear()
#define srt(a)        sort(a.begin(),a.end())
#define rev(a)        reverse(a.begin(),a.end())
#define cmpr(s1,s2)   if(s1.compare(s2)==0)
#define eps 1e-9
#define ll            long long
template <class T> inline T bigmod(T p,T e,T M)
{
    ll ret = 1;
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
}   // M is prime}
template <class T> inline T bpow(T p,T e)
{
    ll ret = 1;
    for(; e > 0; e >>= 1)
    {
        if(e & 1) ret = (ret * p);
        p = (p * p);
    }
    return (T)ret;
}
///int month[]={-1,31,28,31,30,31,30,31,31,30,31,30,31};  //Not Leap Year
///int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
///int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
///int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
///int dx[]={-1,-1,+0,+1,+1,+0};int dy[]={-1,+1,+2,+1,-1,-2}; //Hexagonal Direction
///const double eps=1e-6;
#define MX 100000000
int main()
{

 ll b,p;
 cin>>b>>p;
 cout<<bpow(b,p)<<endl;



    return 0;
}

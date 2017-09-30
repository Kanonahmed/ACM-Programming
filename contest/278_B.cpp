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
int a[10];
int check()
{
    sort(a+1,a+5);
    if((a[1]+a[2]+a[3]+a[4])==4*(a[4]-a[1])&&(a[2]+a[3])==2*(a[4]-a[1])&&(a[1]+a[4])==(a[2]+a[3]))
    return true;
    else false;
}
int main()
{
 int n;
  int aa,bb,cc,dd;
 cin>>n;
 if(!n)
 {
     cout<<"YES"<<endl;
     cout<<"1\n"<<"1\n"<<"3\n"<<"3"<<endl;
     return 0;
 }

if(n==1)
    {
        cin>>aa;
        a[1]=aa;
        cout<<"YES"<<endl;
        cout<<a[1]*2<<"\n"<<a[1]*2<<"\n"<<a[1]*3<<endl;
    }

if(n==2)
{
     cin>>aa>>bb;
    for(int i=1;i<=2000;i++)
    {
        for(int j=1;j<=2000;j++)
        {
            a[1]=aa;
            a[2]=bb;
            a[3]=i;
            a[4]=j;
        if(check()==1)
        {
            cout<<"YES"<<endl;
            cout<<i<<endl;
            cout<<j<<endl;
            return 0;
        }
     }
    }
    cout<<"NO"<<endl;
}
if(n==3)
{
    cin>>aa>>bb>>cc;
    for(int j=1;j<=2000;j++)
    {
         a[1]=aa;
         a[2]=bb;
         a[3]=cc;
         a[4]=j;
         if(check()==1)
        {
            cout<<"YES"<<endl;
            cout<<j<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}
if(n==4)
{
    cin>>aa>>bb>>cc>>dd;
    a[1]=aa;
    a[2]=bb;
    a[3]=cc;
    a[4]=dd;
    if(check()==1)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
}
    return 0;
}


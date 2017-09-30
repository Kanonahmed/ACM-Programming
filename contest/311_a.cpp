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
LL mn[4];
LL mx[4];
int main()
{
    LL n;
    cin>>n;
    for(int i=0; i<3; i++)
    {
        cin>>mn[i]>>mx[i];
    }
    LL sum=0;
    sum=mx[0]+mn[1]+mn[2];
    if(sum>n)
    {
        sum-=mx[0];
        sum+=mn[0];
        LL m=0;
        while(sum<n)
        {
            sum++;
            m++;
        }
        cout<<mn[0]+m<<" "<<mn[1]<<" "<<mn[2]<<endl;
    }
    else if(sum<n)
    {
        sum=sum-mn[1];
        sum+=mx[1];
        if(sum>n)
        {
            LL l=0;
            while(sum>n)
            {
                sum--;
                l++;
            }
            cout<<mx[0]<<" "<<mx[1]-l<<" "<<mn[2]<<endl;
        }
        else
        {
            cout<<mx[0]<<" "<<mx[1]<<" ";
            LL p=0;
            while(sum<n)
            {
                sum++;
                p++;
            }
            cout<<mn[2]+p<<endl;
        }
    }
    else
    cout<<mx[0]<<" "<<mn[1]<<" "<<mn[2]<<endl;

    return 0;
}


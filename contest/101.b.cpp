
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
LL l[55];
int go(int n,LL fx,LL ln )
{
    int cnt=0,p=0;
    //for(int i=1;i<=n;i++)cin>>l[i];
   for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
       if(i!=j)
   {
       for(int k=1;k<=n;k++)
       {
           if(k!=i&&k!=j)
           {
               LL s=l[i]+l[j]+l[k];
               LL h[4];
               h[0]=l[i];
               h[1]=l[j];
               h[2]=l[k];
               sort(h,h+3);
               if(h[0]+h[1]>h[2])
               if(s==fx)
               {
                   cnt++;
                   if(ln==max(l[i],max(l[j],l[k])))p++;
               }
           }
       }
   }
   if(cnt==1)return 1;
   else if(cnt>1&&p==1)return 1;
   else return 0;
}
int main()
{
   int n;
   cin>>n;
   LL mx=0,lx=-1,ln=500000000009;
   for(int i=1;i<=n;i++)cin>>l[i];
   for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
       if(i!=j)
   {
       for(int k=1;k<=n;k++)
       {
           if(k!=i&&k!=j)
           {
               LL s=l[i]+l[j]+l[k];
               LL h[4];
               h[0]=l[i];
               h[1]=l[j];
               h[2]=l[k];
               sort(h,h+3);
               if(h[0]+h[1]>h[2])
               mx=max(mx,s);
           }
       }
   }
   int a,b,c;
   //cout<<"yes "<<mx<<endl;
  if(mx>0)
  {
      int cnt=0;
      for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
       if(i!=j)
   {
       for(int k=1;k<=n;k++)
       {
           if(k!=i&&k!=j)
           {
               LL h[4];
               h[0]=l[i];
               h[1]=l[j];
               h[2]=l[k];
               sort(h,h+3);
               if(h[0]+h[1]>h[2])
               if(mx==(l[i]+l[j]+l[k])){lx=max(lx,(l[i],max(l[k],l[j])));ln=min(ln,min(l[i],min(l[j],l[k])));}
           }
       }
   }
   //cout<<lx<<" "<<ln<<endl;
    if(go(n,mx,lx))
    {
        //cout<<"yes"<<endl;
        for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
       if(i!=j)
   {
       for(int k=1;k<=n;k++)
       {
           if(k!=i&&k!=j)
           {
               LL h[4];
               h[0]=l[i];
               h[1]=l[j];
               h[2]=l[k];
               sort(h,h+3);
               if(h[0]+h[1]>h[2])
               if(mx==(l[i]+l[j]+l[k])&&max(l[i],max(l[k],l[j]))==lx){cout<<h[0]<<" "<<h[1]<<" "<<h[2]<<endl;return 0;}
           }
       }
   }
    }
    else
    {
         for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
       if(i!=j)
   {
       for(int k=1;k<=n;k++)
       {
           if(k!=i&&k!=j)
           {
               LL h[4];
               h[0]=l[i];
               h[1]=l[j];
               h[2]=l[k];
               sort(h,h+3);
               if(h[0]+h[1]>h[2])
               if(mx==(l[i]+l[j]+l[k])&&min(l[i],min(l[k],l[j]))==ln){cout<<h[0]<<" "<<h[1]<<" "<<h[2]<<endl;return 0;}
           }
       }
   }
    }
  }
  else cout<<"-1"<<endl;




    return 0;
}

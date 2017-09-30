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
#define all(a)          a.begin(),a.end()
#define DEG_to_REDI(X) (X*PI/180)
#define REDI_to_DEG(X) (180*X/(PI))
#define UB(a,x) (upper_bound(all(a),x)-a.begin())
#define LB(a,x) (lower_bound(all(a),x)-a.begin())
#define countbit(x) __builtin_popcountll((LL)x)
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
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
LL a[100005][5];
float go(int x,int y,int fs,int sc,int th)
{
                   LL tr=a[x][th]+a[y][th];
                   LL mn=min(a[x][fs],min(a[x][sc],tr));
                   float fuck=(float)mn/2.00;
                   return fuck;
}
int main()
{
 int n;
 cin>>n;
 float ans=-1.0;
 map<pair<LL,LL>,int >mp;
 map<int,pair<LL,int> >vl;
 int k=1,id1,id2;
 for(int i=1;i<=n;i++){

    LL x,y,z;
    scanf("%lld %lld %lld",&x,&y,&z);
     a[i][1]=x,a[i][2]=y,a[i][3]=z;

    if(mp.find({x,y})==mp.end())mp[{x,y}]=k,vl[k]={z,i},k++;
    else
    {
        LL ks=vl[mp[{x,y}]].first;

        LL mx=min(x,min(y,ks+z));
        float fk=(float)mx/2.00;
        if(fk>ans)id1=vl[mp[{x,y}]].second,id2=i,ans=fk;

        if(vl[mp[{x,y}]].first<z)vl[mp[{x,y}]]={z,i};

    }



    if(mp.find({x,z})==mp.end())mp[{x,z}]=k,vl[k]={y,i},k++;
    else
    {
        LL ks=vl[mp[{x,z}]].first;
        LL mx=min(x,min(z,ks+y));
        float fk=(float)mx/2.00;
        if(fk>ans)id1=vl[mp[{x,z}]].second,id2=i,ans=fk;

        if(vl[mp[{x,z}]].first<y)vl[mp[{x,z}]]={y,i};

    }


if(mp.find({y,z})==mp.end())mp[{y,z}]=k,vl[k]={x,i},k++;
    else
    {
        LL mx=min(y,min(z,vl[mp[{y,z}]].first+x));
        float fk=(float)mx/2.00;
        if(fk>ans)id1=vl[mp[{y,z}]].second,id2=i,ans=fk;

        if(vl[mp[{y,z}]].first<x)vl[mp[{y,z}]]={x,i};

    }

 }

 int chk=0;
 int id;
 for(int i=1;i<=n;i++)
 {
     LL mn=min(a[i][1],min(a[i][2],a[i][3]));
     float fk=(float)mn/2.00;
     if(fk>=ans)
     {
         ans=fk;
         chk=1;
         id=i;
     }
 }


   if(chk==0)
   {cout<<"2"<<endl;cout<<id1<<" "<<id2<<endl;}
   else
   {
       cout<<"1"<<endl;
       cout<<id<<endl;
   }




    return 0;
}



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
int main()
{
   char s[100000];
   gets(s);
   int l=strlen(s);
   int m=0,p=0,sum=0;
   vector<char>v;
   for(int i=0;i<l;i++)
   {
       if(s[i]=='?'||s[i]=='+'||s[i]=='-')v.push_back(s[i]);
   }
   for(int i=l-1;i>=0;i--)
   {
       if(s[i]>='0'&&s[i]<='9')continue;
       else
       {
           for(int j=i+1;j<l;j++){char cc=s[j];int gh=cc-'0';sum=sum*10+gh;}
           break;
       }
   }
  //cout<<sum<<endl;

   for(int i=0;i<l;i++)
   {
       if(s[i]=='-')m++;
       else if(s[i]=='+')p++;
   }
   if(s[0]=='?')p++;
  cout<<m<<" "<<p<<endl;
  int k=(p*sum)-m;
  if(k>=sum){
        //cout<<"1"<<endl;
        int gg=(sum+m)/p;
  //cout<<gg<<endl;
       if(!gg){cout<<"Impossible"<<endl;return 0;}
    cout<<"Possible"<<endl;

    int md=(sum+m)%p;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]=='?'&&!i){int r=gg;if(md){r++;md--;}cout<<r<<" ";}
        else if(v[i]=='?'&&v[i-1]=='-'){cout<<"- 1 ";}
        else if(v[i]=='?'&&v[i-1]=='+')
        {
            int r=gg;if(md){r++;md--;}
            cout<<"+ "<<r<<" ";
        }
    }
    cout<<"= "<<sum<<endl;
  }
  else
  {
      cout<<"Impossible"<<endl;
  }



    return 0;
}


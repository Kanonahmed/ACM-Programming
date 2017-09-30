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
int a[200005],n;
int tree[3*200005];
int  init(int node,int b,int e)
{
    if(b==e)
    {
        return tree[node]=a[b];
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    tree[node]=min(init(left,b,mid),init(right,mid+1,e));
    return tree[node];
}
int query(int node,int b,int e,int i,int j)
{
    if(i>e||j<b)return 1000000005;
    if(i<=b&&j>=e)return tree[node];
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    int p=min(query(left,b,mid,i,j),query(right,mid+1,e,i,j));
    return p;
}

int main()
{
  cin>>n;
  int ans=0;
  for(int i=1;i<=n;i++)
    cin>>a[i];
    init(1,1,n);
    for(int i=1;i<=n;i++)
    {

        if(i==1)
        {
            int tmp=a[i];
            int res=query(1,1,n,i+1,n);
            if(tmp<res)ans=max(ans,(n-i)*(tmp+1)+tmp);
            else ans=max(ans,((n-i)*res)+res+(tmp-res>0));
            //cout<<ans<<endl;
        }
        else if(i==n)
        {
            int tmp=a[i];
            int res=query(1,1,n,1,i-1);
            if(tmp<res){ans=max(ans,(n*tmp)+n-1);}
            else ans=max(ans,n*res+(tmp-res>0));
            //cout<<ans<<endl;
        }
        else
        {
            int tmp=a[i];
            int res1=query(1,1,n,i+1,n);
            int res2= query(1,1,n,1,i-1);

            if(tmp)
            {
                if(ll>res2)ans=max(ans,(n-i+1)*(res2+1)+(i-1)*res2);
                else ans=max(ans,n*res2+(abs(res1-tmp)>0));
                cout<<ans<<endl;
            }
            else
            {
                ans=max(ans,n*ll+(i-1)+(tmp>ll));
                cout<<ans<<endl;
            }
        }
    }

     cout<<ans<<endl;




    return 0;
}


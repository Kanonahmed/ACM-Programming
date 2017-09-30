#include<bits/stdc++.h>
using namespace std;
#define xx              first
#define yy              second
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
int n,m;
vector<int>graph[1005];
queue<int>q;
int ind[1005];
int topological_sort()
{

    vector<int>v;
    while(!q.empty())
    {
        int u=q.front();q.pop();
        if(!ind[u])
         v.push_back(u);
        for(int j=0;j<graph[u].size();j++)
        {
            int v=graph[u][j];
            ind[v]--;
        }
    }
    if(v.size()==n)return 1;
    else return 0;
}
int main()
{
  cin>>n>>m;
  memset(ind,0,sizeof ind);
  for(int i=0;i<m;i++)
  {
      int x,y;
      cin>>x>>y;
      graph[x].push_back(y);
      ind[y]++;
  }
  int cnt=0;
  for(int i=1;i<=n;i++)
    {
        int p;
        cin>>p;
        if(!ind[p])cnt++;
        q.push(p);
    }
  if(cnt==0)cout<<"NO"<<endl;
  else
  {
      int res=topological_sort();
      if(res)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
  }




    return 0;
}


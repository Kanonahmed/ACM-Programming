
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<queue>
#include<utility>
#include<string>
#include<cstring>
#include<cmath>
#define MPI map<int,int>
#define PRI pair<int,int>
#define VI vector<int>
#define STI stack<int>
#define QI queue<int>
#define PI 2*acos(0.0)
#define DEG_to_REDI(X) (X*PI/180)
#define REDI_to_DEG(X) (180*X/(PI))
#define ll long long
#define eps 1e-9
#define P 10000
template<class T> T SQR(T X)
{
    return X*X;
}
template<class T> T GCD(T a, T b)
{
    if(b==0)return a;
    else return GCD(b,a%b);
}
template<class T> T LCM(T a,T b)
{
    return (a*b)/(GCD(a,b));
}
template<class T> T MOD(T a,T b)
{
    if(a>0) return a%b;
    else return (a%b+b)%b;
}
template<class T> T BIGMOD(T b,T p,T m)
{
    if(p==0)return 1;
    else if(p%2==0) return (BIGMOD(b,p/2,m)%m*BIGMOD(b,p/2,m)%m)%m;
    else return ((b%m)*BIGMOD(b,p-1,m)%m)%m;
}
using namespace std;
const int N=10000;
int a[1000000];
int main()
{
int n,k=1;
map<int ,int>mp;
cin>>n;
for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    if(mp.find(x)==mp.end())
    {
        mp[x]=k++;
    }
}


for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    if(mp.find(x)==mp.end())
    {
        mp[x]=k++;

    }
}
  map<int ,int>::iterator ii;
for(ii=mp.begin();ii!=mp.end();++ii)
cout<<(*ii).first<<" ";










    return 0;
}

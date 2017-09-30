#include <bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<map>
#include<sstream>

using namespace std;
#define db double
#define ll long long
#define llu long long unsigned
#define ff(i,n) for(int i=0;i<n;i++)
#define ff1(i,a,n) for(int i=a;i<=n;i++)
#define sf scanf
#define sf1(a) sf("%d",&a)
#define sf2(a,b) sf("%d %d",&a,&b)
#define sf3(a,b,c) sf("%d %d %d",&a,&b,&c)
#define sf4(a,b,c,d) sf("%d %d %d %d",&a,&b,&c,&d)
#define sfd(a) sf("%lf",&a);
#define sfd2(a,b) sf("%lf %lf",&a,&b);
#define sfl(a) sf("%lld",&a)
#define sfl2(a,b) sf("%lld %lld",&a,&b)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pf printf
#define pft(tc) printf("Case: %d",tc++)
#define PI (2.0*acos(0.0)) //#define PI acos(-1.0)
#define mem0(a) memset(a,0,sizeof a)
#define mem1(a) memset(a,-1,sizeof a)
#define pb push_back
#define xx first
#define yy second
#define mp make_pair
#define inf 99999999
#define MX 99999999
#define mod (ll) 1000000007

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


//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
//int dx[]={0,1,0,-1};int dy[]={1,0,-1,0}; //4 Direction

int a[1000006];
int vis[100006];
int main()
{
    int n,m;
    while(sf1(n)==1)
    {
        mem0(vis);
        for(int i=1;i<=n;i++)
        {
            sf1(a[i]);
            vis[a[i]]++;
        }
        sort(a+1,a+n+1);
        int p=a[1],q=a[n];
        int i=a[1],j=a[n];
        int cnt=0;
        int rem1=0,rem2=0;
        while(i<j)
        {
            //pf("%d %d %d %d %d\n",i,j,vis[i],vis[j],cnt);
            while(vis[j]>0 && vis[i]>0 && j-i>1)
            {
                //pf("%d %d\n",vis[i],vis[j]);
                vis[j-1]++;
                vis[j]--;
                vis[i+1]++;
                vis[i]--;
                cnt++;

                //pf("sw\n");
            }
            //pf("sw\n");
            if(vis[j]==0)
            {
                j--;
            }
            if(vis[i]==0)
            {
                i++;
            }
            if(j-i==1)
                break;

        }



        pf("%d\n",cnt);
    }
}

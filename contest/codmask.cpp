#include<bits/stdc++.h>
#define LL long long
using namespace std;
bool vis[2000005];
int k,a[2000004];
vector<pair<int,int> >v;
LL ans;
void seive()
{
    a[k++]=2;
    for(int i=3;i<=2000000;i+=2)
    {
        if(!vis[i])
        {
            a[k++]=i;
            vis[i]=1;
            for(int j=i;j<=2000000;j+=i)vis[j]=1;
        }
    }
}
void go(int p,int lm,LL sum)
{
    if(lm==p){if(sum%2)ans=max(sum,ans);return ;}
    go(p+1,lm,sum);
    for(int i=0;i<v[p].second;i++)
    {
        sum*=(LL)v[p].first;
        go(p+1,lm,sum);
    }
}
int main()
{
    seive();
 int tc,ks=1;
 cin>>tc;
 while(tc--){
 LL n,sq,m;
 scanf("%lld",&n);
v.clear();
 for(int i=0;(LL)a[i]<=sqrt(n)&&i<k;i++)
 {
     if(n%(LL)a[i]==0)
     {
         int cnt=0;
         while(n%(LL)a[i]==0){cnt++;n/=(LL)a[i];}
         v.push_back(make_pair(a[i],cnt));
     }
 }
 if(n>1)v.push_back(make_pair(n,1));
     ans=1;
   go(0,v.size(),1);
 printf("Case %d: %lld\n",ks++,ans);
 }
    return 0;
}

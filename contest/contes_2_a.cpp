#include<bits/stdc++.h>
#define LL long long
using namespace std;
const LL N=100005;
LL pr[N],k;
bool vis[N+5];
vector<LL>pcal[10005];
void seive()
{
    for(LL i=3;i<=N;i+=2)
    {
        if(!vis[i])
        {
            pr[++k]=i;
            for(LL j=2*i;j<=N;j+=i)vis[j]=1;
        }
    }
    pr[0]=2;
}
void go()
{
    seive();
    for(LL i=2;i<=100000;i++)
    {
        LL n=i;
        LL res=1;
        for(LL j=0;j<=sqrt(n);j++)
        {
            LL c=0;
            if(n%pr[j]==0)
            {
                while(n%pr[j]==0)
                {
                   c++;
                   n/=pr[j];
                }
                res*=(2*c+1);
            }
        }
        if(n>1)res*=3;
        pcal[res].push_back(i*i);
    }
}
int main()
{
    go();
    int tc;
   scanf("%d",&tc);
   while(tc--)
   {
       LL d,l,h;
       scanf("%lld%lld%lld",&d,&l,&h);
       int up=upper_bound(pcal[d].begin(),pcal[d].end(),h)-pcal[d].begin();
       int dwn=lower_bound(pcal[d].begin(),pcal[d].end(),l)-pcal[d].begin();
       cout<<up-dwn<<endl;
   }
    return 0;
}

#include<bits/stdc++.h>
#define LL long long
using namespace std;
const int N=1000000;
LL pr[N],k,h;
LL pcal[10000005];
bool vis[N+5];
void seive()
{
    for(LL i=3; i<=N; i+=2)
    {
        if(!vis[i])
        {
            pr[++k]=i;
            for(int j=2*i; j<=N; j+=i)vis[j]=1;
        }
    }
    pr[0]=2;
}
void go()
{
    seive();
    for(LL num=1;; num++)
    {
        LL x=num;
        LL ret=0;
        for(int i=0; pr[i]<=sqrt(x)&&i<=k; i++)
        {
                while(x%pr[i]==0)
                {
                    x/=pr[i];
                    ret++;
                }
        }
        if(x>1)ret++;
        LL temp=pcal[num-1]+ret;
        if(temp>10000000){h=num;break;}
        pcal[num]=temp;
    }
}
int main()
{
    go();
    int tc;
     cin>>tc;
    while(tc--)
    {
        int n;
         cin>>n;
        int ans=upper_bound(pcal,pcal+h,n)-pcal;
        cout<<ans<<endl;
    }


    return 0;
}

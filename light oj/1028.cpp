#include<bits/stdc++.h>
using namespace std;
#define N 1000050
int a[N+50],prime[N+50],k;
void sieve()
{
    int q=sqrt(N);
    for(int i=2; i<=q; i++)
    {
        if(a[i]==0)
        {
            for(int j=2*i; j<=N; j+=i)
                a[j]=1;
        }
    }
    for(int i=2; i<=N; i++)
    {
        if(a[i]==0)
            prime[k++]=i;
    }
}

int main()
{
    sieve();
    long long p,d;
    int tc,t;
    scanf("%d",&tc);
    t=1;
    while(tc--)
    {
        scanf("%lld",&p);
        int q=sqrt(p);
        int l=0;
        int sum=1;
        for(int i=0; prime[i]<=q; i++)
        {
            if(p%prime[i]==0)
            {
                int x=0;
                while(p%prime[i]==0)
                {
                    p=p/prime[i];
                    x++;
                }
                sum*=(x+1);
            }
            q=sqrt(p);
        }
        if(p>1) sum*=2;
        printf("Case %d: %d\n",t,sum-1);
        t++;
    }
    return 0;
}

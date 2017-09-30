#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
#include<string>
#define LL long long
using namespace std;
bool vis[1000005];
bool tis[1000005];
int main()
{
    freopen("adjustment.in","r",stdin);
    freopen("adjustment.out","w",stdout);
    LL n;
    int q;
    scanf("%lld %d",&n,&q);
    LL sum=n*(n+1)/2;
    LL r=0,rs=0,c=0,cs=0;
    char k;
    LL id;
    while(q--)
    {
        cin>>k>>id;
        LL res=sum+(n*(LL)id);
        if(k=='R')
        {

            res-=(c+cs*id);
            if(vis[id])res=0;
            if(!vis[id])
            {
                r+=id;
                rs++;
                vis[id]=1;
            }
        }
        if(k=='C')
        {

            res-=(r+rs*id);
            if(tis[id])res=0;
            if(!tis[id])
            {
                c+=id;
                cs++;
                tis[id]=1;
            }
        }

        printf("%lld\n",res);
    }
    return 0;
}

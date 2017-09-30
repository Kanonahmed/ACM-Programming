#include<bits/stdc++.h>
#define LL long long
using namespace std;
const LL MX=10000000000000000;
int main()
{
   int tc,ks=1;
   scanf("%d",&tc);
   while(tc--)
   {
        LL a;
        scanf("%lld",&a);
        LL lo=0,hi=1000000000000000,ans=MX,ch=0;
        while(lo<=hi)
        {
            LL mid=(lo+hi)/2LL;
            LL cnt=0;
            LL n=mid;
            while(n>=5LL)
            {
                cnt+=n/5LL;
                n/=5LL;
            }
            if(cnt<a)lo=mid+1LL;
            else if(cnt>a)hi=mid-1LL;
            else
            {
                hi=mid-1LL;
                ch=1;
                ans=min(ans,mid);
            }
        }
        if(ch)printf("Case %d: %lld\n",ks++,ans);
        else printf("Case %d: impossible\n",ks++);
   }


    return 0;
}

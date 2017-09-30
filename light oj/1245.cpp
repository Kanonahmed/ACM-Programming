#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    int tc,ks=1;
    cin>>tc;
    while(tc--)
    {
        LL n,ans=0,qq;
        scanf("%lld",&n);
        qq=sqrt(n);

       for(LL i=1;i<=qq;i++)
       {
            LL pr=n/i;;
            LL late=n/(i+1);
            ans+=(pr-late)*i;
            if(pr!=i)ans+=pr;
       }

        printf("Case %d: %lld\n",ks++,ans);
    }



    return 0;
}

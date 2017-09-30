#include<bits/stdc++.h>
#define LL long long
using namespace std;
int go(LL x,LL i)
{
          int ans=1;
          int cnt=0,sum=1;
              if(x<0)
                {
                        while(x%i==0){x/=i;cnt++;sum*=-1;}
                        if(x==-1LL&&sum<0)ans=max(ans,cnt);
                }
                else
                {
                         while(x%i==0){cnt++;x/=i;}
                         if(x==1LL)ans=max(ans,cnt);
                }
                return ans;
}
int main()
{
    int tc,ks=1;
    cin>>tc;
    while(tc--)
    {
            LL n,qq;
            int ans=1;
            scanf("%lld",&n);
            qq=n;
            if(qq<0LL)qq*=-1LL;
            for(LL i=2;i*i<=qq;i++)
            {
                if(n%i==0)
                {
                    int aa=go(n,i);
                    int bb=go(n,n/i);
                    ans=max(ans,max(aa,bb));
                }

            }

            printf("Case %d: %d\n",ks++,ans);
    }



    return 0;
}

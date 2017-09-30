#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    freopen("r_in.in","r",stdin);
    freopen("w_out.txt","w",stdout);
    int tc,t=1;
    cin>>tc;
    while(tc--){
     LL r,c,ans=0LL;
     cin>>r>>c;
     if(r<2)
     {
         if(c<2)ans+=c;
         else ans=2+(c-2LL)/2LL;
     }
     else if(c<2)
     {
         if(r<2)ans+=r;
         else
         ans+=2+(r-2)/2LL;
     }
     else
     {
         ans+=2+(r-2LL)/2LL;
         if(c==2)ans*=2LL;
         else
         {
             LL sum=0;
             LL ad=0;
             if(r>2)ad=ans-1LL;
             for(int i=1;i<=c;i+=2)
                if(i>1)sum+=ans+ad;
               else
                sum+=ans;

             if(c%3)sum+=ans;
             ans=sum;
         }
     }
   printf("Case #%d: %lld\n",t++,ans);

    }

    return 0;
}

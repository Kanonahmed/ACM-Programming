#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL a[100005],n,p,q;
int main()
{
   int tc,ks=1;
   cin>>tc;
   while(tc--)
   {
       int ans=0;
       scanf("%lld %lld %lld",&n,&p,&q);
       for(int i=0;i<n;i++)scanf("%lld",&a[i]);
       sort(a,a+n);
       for(int i=0;i<n;i++)
       {
           LL tw=a[i]/2LL;
           LL rem=a[i]%2LL;
           if(q>=tw&&p>=rem)
           {
               ans++;
               q-=tw;
               p-=rem;
           }
           else
           {
               if(q<tw)
               {
                   tw-=q;
                   tw*=2;
                   if(rem)tw++;
                   if(p>=tw)
                   {
                       ans++;p-=tw;q=0;
                   }
               }
               else
               {
                   if(rem<=p)
                   {
                       ans++;p-=rem;
                       q-=tw;
                   }
               }
           }
       }

       cout<<ans<<endl;
   }



    return 0;
}

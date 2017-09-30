#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
     int tc;
     cin>>tc;
     while(tc--)
     {
         LL n,k;
         scanf("%lld %lld",&n,&k);
         if(n==1LL)
         {
             if(k%2LL==1LL)printf("ON\n");
             else printf("OFF\n");
         }
         else
         {
             k-=n;
             if(k<=0)printf("OFF\n");
             else
             {
                 if(k%2LL)
                 {
                     if((k/2LL)%2LL)printf("ON\n");
                     else printf("OFF\n");
                 }
                 else printf("OFF\n");
             }
         }
     }



    return 0;
}

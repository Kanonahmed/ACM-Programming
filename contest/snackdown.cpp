#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
   int tc;
   cin>>tc;
   while(tc--)
   {
       LL a[10000],n;
       scanf("%lld",&n);
         for(int i=0;i<n;i++)scanf("%lld",&a[i]);
        LL sum=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]<4LL)sum++;
            else
            {
                LL ch=a[i];
                while(ch>3)
                {
                    sum+=ch/4LL;
                    ch/=4LL;
                }
                if(ch)sum++;
            }
        }
        //cout<<sum<<endl;
      if(sum%2LL)printf("Henry\n");
      else printf("Derek\n");
   }



    return 0;
}

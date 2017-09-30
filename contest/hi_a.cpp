#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL a[100005];
int n;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
         scanf("%d",&n);
         LL sum=0;
         for(int i=1;i<=n;i++){scanf("%lld",&a[i]);sum+=a[i];}
         int ch=0;
         for(int i=1;i<=n/2;i++)
         {
             if(a[i]!=a[n-i+1]){ch=1;break;}
         }
         if(!ch)cout<<"0"<<endl;
         else {
         LL lum=0;
         int res=0;
         for(int i=1;i<=n;i++)
         {
             lum+=a[i];
             if(lum==(sum-lum)){res=i;break;}
         }
         if(res)cout<<res<<endl;
         else
         cout<<n-1<<endl;
         }
    }



    return 0;
}

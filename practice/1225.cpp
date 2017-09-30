#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   int cnt[10];
   int tc;
   cin>>tc;
   while(tc--)
   {
       cin>>n;
       memset(cnt,0,sizeof cnt);
       for(int i=1;i<=n;i++)
       {
           int x=i;
           while(x)
           {
               int rem=x%10;
               cnt[rem]++;
               x/=10;
           }
       }
       for(int i=0;i<=8;i++)
        cout<<cnt[i]<<" ";
        cout<<cnt[9];
        cout<<endl;
   }

    return 0;
}

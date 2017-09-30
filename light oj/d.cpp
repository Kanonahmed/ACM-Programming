#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,tc,t=1;
    cin>>tc;
     while(tc--)
     {
         int one=0,zero=0;
         cin>>n;
         while(n)
         {
             int rem=n%2;
             //cout<<rem;
             if(rem==1)
             one++;
             else if(rem==0)
             zero++;
             n=n/2;
         }

         if((one%2==0&&zero%2==0)||(one%2!=0&&zero%2!=0))
         printf("Case %d: bin-Even\n",t);
         else
         printf("Case %d: bin-Odd\n",t);
         t++;
     }


    return 0;
}

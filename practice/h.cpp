#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   string g="";
   cin>>n;
   if(n==0){cout<<"10"<<endl;return 0;}
   if(n<10)
   {
       cout<<n<<endl;
       return 0;
   }
   for(int i=9;i>1;i--)
   {
       if(n%i==0&&n>1)
       {
           while(n%i==0)
           {
               g+=i+'0';
               n/=i;
           }
       }
   }
   if(n!=1){cout<<"-1"<<endl;return 0;}
   sort(g.begin(),g.end());
   cout<<g<<endl;
    return 0;
}

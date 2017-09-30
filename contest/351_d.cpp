#include<bits/stdc++.h>
using namespace std;
bool vis[100005];
int main()
{
   int n,k;
   cin>>n>>k;
   int a,b,c,d;
   cin>>a>>b>>c>>d;
   vis[a]=vis[b]=vis[c]=vis[d]=1;
   if(n<=4||k<=n){cout<<"-1"<<endl;}
   else
   {
       cout<<a<<" "<<c<<" ";
       for(int i=1;i<=n;i++)
        if(!vis[i])cout<<i<<" ";
       cout<<d<<" "<<b<<endl;


       cout<<c<<" "<<a<<" ";
       for(int i=1;i<=n;i++)
        if(!vis[i])cout<<i<<" ";
       cout<<b<<" "<<d<<endl;

   }


    return 0;
}

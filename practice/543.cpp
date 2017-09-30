#include<bits/stdc++.h>
using namespace std;
int prim[1000002];
int vis[1000002];
int k;
void seive()
{
    prim[0]=2;
    vis[0]=vis[1]=1;
    k=1;
    for(int i=4;i<=1000000;i+=2)vis[i]=1;
    for(int i=3;i<=1000000;i+=2)
    {
        if(!vis[i])
        {
            prim[k++]=i;
            for(int j=2*i;j<=1000000;j+=i)
                vis[j]=1;
        }
    }
}
int main()
{
   int n;
   seive();
   while(cin>>n&&n)
   {
       int f=1;
       for(int i=0;prim[i]<=n;i++)
       {
           int s=n-prim[i];
           if(!vis[s])
           {
               printf("%d = %d + %d\n",n,prim[i],s);
               f=0;
               break;
           }
       }
       if(f)
       {
           cout<<"Goldbach's conjecture is wrong."<<endl;
       }
   }


    return 0;
}

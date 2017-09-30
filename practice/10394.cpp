#include<bits/stdc++.h>
using namespace std;
int prim[20000001];
int vis[20000001];
int k,p;
int a[1000002];
int b[1000002];
void seive()
{
    prim[0]=2;
    k=1;
    for(int i=3;i<=20000000;i+=2)
    {
        if(!vis[i])
        {
            prim[k++]=i;
            for(int j=2*i;j<=20000000;j+=i)
                vis[j]=1;
        }
    }
}
void val()
{
   for(int i=0;i<k;i++)
   {
       if(prim[i+1]-prim[i]==2)
       {
           a[p]=prim[i];
           b[p]=prim[i+1];
           p++;
       }
       if(p>100000)break;
   }
}
int main()
{
    p=0;
    seive();
     val();
     int n;
     while(cin>>n)
     {
         cout<<"("<<a[n-1]<<", "<<b[n-1]<<")"<<endl;
     }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
bool vis[1000000];
int prim[1000000],k;
void prime()
{
    k=0;
    for(int i=3;i<=1000000;i+=2)
    {
        if(!vis[i])
        {
            prim[++k]=i;
            for(int j=3*i;j<=1000000;j+=2*i)
                vis[j]=1;
        }
    }
    prim[0]=2;
}
vector<int>v;
 void prim_fact(int n)
 {
     for(int i=0;prim[i]<=sqrt(n);i++)
     {
         if(n%prim[i]==0)
         {
             v.push_back(prim[i]);
             while(n%prim[i]==0)n/=prim[i];
         }
     }
     if(n>1)v.push_back(n);
 }
int main()
{
    prime();
    int n,cp;
    cin>>n;
    prim_fact(n);
      cp=n;
      for(int i=0;i<v.size();i++)
      {
          cp=(cp/v[i])*(v[i]-1);
      }
      cout<<cp<<endl;
    return 0;
}

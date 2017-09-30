#include<bits/stdc++.h>
using namespace std;
const int N=1000000;
int pr[2*N],k;
int vis[2*N];
void seive()
{
    for(int i=3;i<=N;i+=2)
    {
        if(!vis[i])
        {
            pr[++k]=i;
            for(int j=2*i;j<=N;j+=i)vis[j]=1;
        }
    }
    pr[0]=2;
}
int main()
{
  seive();
  int tc;
  cin>>tc;
  while(tc--)
  {
      int n,res;
      cin>>n;
      res=n;
      for(int i=0;pr[i]<=sqrt(n);i++)
      {
          if(n%pr[i]==0)
          {
              res-=res/pr[i];
              while(n%pr[i]==0)n/=pr[i];
          }
      }
      if(n>1)res-=res/n;
      cout<<res<<endl;
  }


    return 0;
}

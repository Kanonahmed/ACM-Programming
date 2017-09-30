#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=1000010;
ll pr[N+10],vis[N+100],k;
void seive()
{
    for(ll i=3;i<=N;i+=2)
    {
        if(!vis[i])
        {
            pr[++k]=i;
            for(ll j=2*i;j<=N;j+=i)vis[j]=1;
        }
    }
    pr[0]=2;
}
int main()
{
seive();
//cout<<k<<endl;
 //for(int i=0;i<=k;i++)cout<<pr[i]<<" ";
  int tc,t=1;
  ll n;
  cin>>tc;
  while(tc--)
  {
      cin>>n;
      ll res=1;
      for(int i=0;pr[i]<=sqrt(n);i++)
      {
          if(n%pr[i]==0)
          {
              int c=0;
              while(n%pr[i]==0)
              {
                  c++;
                  n/=pr[i];
              }
              res*=(c+1);
          }
      }
      if(n>1)res*=2;
      printf("Case %d: %lld\n",t,res-1);
      t++;

  }



    return 0;
}

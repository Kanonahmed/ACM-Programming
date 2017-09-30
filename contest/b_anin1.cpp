#include<bits/stdc++.h>
#define LL long long
using namespace std;
const LL N=1000005;
bool vis[N+5];
LL pr[N],k;
void seive()
{
    for(LL i=3;i<=N;i+=2)
    {
        if(!vis[i])
        {
            pr[++k]=i;
            for(LL j=2*i;j<=N;j+=i)vis[j]=1;
        }
    }
    pr[0]=2;
}
int main()
{
  seive();
  int tc,t=1;
  cin>>tc;
  while(tc--)
  {
      LL a,b,l;
      cin>>a>>b>>l;
      if(l%a||l%b){cout<<"Case "<<t++<<": impossible"<<endl;continue;}
      LL ans=1;
      for(int i=0;pr[i]<=sqrt(l)&&i<=k;i++)
      {
          LL ac=0,bc=0,lc=0;
          LL res=1;
          while(a%pr[i]==0){a/=pr[i];ac++;}
          while(b%pr[i]==0){b/=pr[i];bc++;}
          while(l%pr[i]==0){l/=pr[i];lc++;res*=pr[i];}
          if(lc>ac&&lc>bc)ans*=res;
      }
      if(l>a&&l>b&&l>1)ans*=l;
      cout<<"Case "<<t++<<": "<<ans<<endl;
  }


    return 0;
}

#include<bits/stdc++.h>
#define LL long long
using namespace std;
const int N=2*1000000;
int pr[N+5];
int pal[N+5];
bool vis[N+5];
void seive()
{
    for(int j=4; j<=N; j+=2)vis[j]=1;
    int q=sqrt(N);
    for(int i=3; i<=q; i+=2)
    {
        if(!vis[i])
        {
            for(int j=2*i; j<=N; j+=i)
                vis[j]=1;
        }
    }
    for(int i=2; i<=N; i++)
    {
        if(!vis[i])pr[i]=pr[i-1]+1;
        else pr[i]=pr[i-1];
    }
}
int palin(int u)
{
    int n=u;
    int nw=0;
    while(n)
    {
        nw=(nw*10)+n%10;
        n/=10;
    }
    if(nw==u){return 1;}
    else return 0;
}
int main()
{
    seive();
    for(int i=1; i<=N; i++)
    {
        int tr=palin(i);
        if(tr){pal[i]=pal[i-1]+1;}
        else pal[i]=pal[i-1];
    }
    int p,q;
    cin>>p>>q;
  for(int i=N;i>=1;i--)
  {
      LL lef=(LL)q*(LL)pr[i];
      LL rig=(LL)p*(LL)pal[i];
     if(lef<=rig){cout<<i<<endl;return 0;}
  }
  cout<<"Palindromic tree is better than splay tree"<<endl;
    return 0;
}

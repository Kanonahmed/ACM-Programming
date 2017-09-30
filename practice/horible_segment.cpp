#include<bits/stdc++.h>
#define ll long long
#define f1(i,n) for(ll i=1;i<=n;i++)
using namespace std;
ll n;
ll a[100001];
ll tree[4*100001],lazy[4*100001];
void build(ll nod,ll b,ll e)
{
    if(b==e){tree[nod]=a[b];return ;}
    build(nod*2,b,(b+e)/2);
    build(nod*2+1,(b+e)/2+1,e);
    tree[nod]=tree[nod*2]+tree[nod*2+1];
}
void update(ll nod,ll b,ll e,ll i,ll j,ll vlue)
{
    if(lazy[nod])
    {
        tree[nod]+=lazy[nod]*(e-b+1);
        if(b!=e){
            lazy[nod*2]+=lazy[nod];
            lazy[nod*2+1]+=lazy[nod];
        }
        lazy[nod]=0ll;
    }
    if(i>e||j<b)return ;
    if(i<=b&&j>=e)
    {
        tree[nod]+=(e-b+1)*vlue;
        if(b!=e){
            lazy[nod*2]+=vlue;
            lazy[nod*2+1]+=vlue;
        }
        return;
    }
    update(nod<<1,b,(b+e)>>1,i,j,vlue);
    update((nod<<1)+1,((b+e)>>1)+1,e,i,j,vlue);
    tree[nod]=tree[nod<<1]+tree[(nod<<1)+1];
}
ll query(ll nod,ll b,ll e,ll i,ll j)
{
    if(lazy[nod])
    {
        tree[nod]+=(e-b+1)*lazy[nod];
        if(b!=e){
            lazy[nod*2]+=lazy[nod];
        lazy[nod*2+1]+=lazy[nod];
        }
        lazy[nod]=0ll;
    }
    if(i>e||j<b)return 0;
    if(i<=b&&j>=e)return tree[nod];
    ll p=query(nod<<1,b,(b+e)>>1,i,j)+query((nod<<1)+1,((b+e)>>1)+1,e,i,j);
    return p;
}
int main()
{
  int tc,c;
  scanf("%d",&tc);
  while(tc--)
  {
      scanf("%lld %d",&n,&c);
      f1(i,n) a[i]=0ll;
      build(1,1,n);
      while(c--)
      {
          int cmd;
          scanf("%d ",&cmd);
          if(cmd==0)
          {
              ll x,y;
              ll z;
              scanf("%lld %lld %lld",&x,&y,&z);
              update(1,1,n,x,y,z);
          }
          else if(cmd==1)
          {
              ll x,y;
              scanf("%lld %lld",&x,&y);
              printf("%lld\n",query(1,1,n,x,y));
          }
      }
      memset(tree,0,sizeof tree);
      memset(lazy,0,sizeof lazy);
  }


    return 0;
}

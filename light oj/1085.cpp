#include<bits/stdc++.h>
#define LL long long
using namespace std;
const LL M=1000000007;

struct d
{
    LL a;
    int b;
    d(LL x,int _x){a=x;b=_x;}
    bool operator <(const d &p)const
    {
        if(a<p.a)return 1;
        else if(a==p.a&&b>p.b)return 1;
        else return 0;
    }
};
LL tree[100005];
int n;
void update(int idx,LL vl)
{
    while(idx<=n)
    {
        tree[idx]=(vl+tree[idx])%M;
        idx+=idx&-idx;
    }
}
LL qry(int idx)
{
    LL sum=0;
    while(idx>0)
    {
        sum=(sum+tree[idx])%M;
        idx-=idx&-idx;
    }
    return sum;
}
int main()
{
  int tc,ks=1;
  scanf("%d",&tc);
  while(tc--)
  {
      memset(tree,0,sizeof tree);
    scanf("%d",&n);
     vector<d> h;
    for(int i=0;i<n;i++)
    {
        LL x;
        scanf("%lld",&x);
        h.push_back(d(x,i+1));
    }
    sort(h.begin(),h.end());
    LL ans=0;
    for(int i=0;i<n;i++)
    {
        LL p=qry(h[i].b);
        update(h[i].b,p+1);
    }
      printf("Case %d: %lld\n",ks++,qry(n));
  }

    return 0;
}

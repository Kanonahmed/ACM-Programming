#include<bits/stdc++.h>
#define LL long long
using namespace std;
const int MAX=10000002;
int tree[MAX];
void update(int idx,int vl)
{
    while(idx<=MAX)
    {
        tree[idx]+=vl;
        idx+=idx&(-idx);
    }
}
int qry(int idx)
{
    LL sum=0;
    while(idx>0)
    {
        sum+=tree[idx];
        idx-=idx&(-idx);
    }
    return sum;
}
int main()
{
  int tc,ks=1;
  scanf("%d",&tc);
  while(tc--)
  {

    int n,a[200002];
    memset(tree,0,sizeof tree);
    LL ans=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=n-1;i>=0;i--)
    {
        update(a[i],1);
        ans+=qry(a[i]-1);
    }
    printf("%lld\n",ans);
    puts("");
  }

    return 0;
}

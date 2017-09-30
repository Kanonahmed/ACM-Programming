#include<bits/stdc++.h>
using namespace std;
int a[100001];
int tree[3*100001];
int n;
int init(int node,int b,int e)
{
    if(b==e)return tree[node]=a[b];
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    tree[node]=min(init(left,b,mid),init(right,mid+1,e));
    return tree[node];
}
int query(int node,int b,int e,int i,int j)
{
    if(i>e||j<b)return 10000000;
    if(i<=b&&j>=e)return tree[node];
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    int p=min(query(left,b,mid,i,j),query(right,mid+1,e,i,j));
    return p;
}
int main()
{
  int tc,t=1;
  scanf("%d",&tc);

  while(tc--)
  {
      int q;
      scanf("%d %d",&n,&q);
      for(int i=1;i<=n;i++)scanf("%d",&a[i]);
      init(1,1,n);
      printf("Case %d:\n",t++);
      while(q--){
      int ss,en;
      scanf("%d%d",&ss,&en);
      printf("%d\n",query(1,1,n,ss,en));
      }
      memset(tree,0,sizeof tree);
      memset(a,0,sizeof a);
  }


    return 0;
}

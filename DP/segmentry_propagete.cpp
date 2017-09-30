#include<bits/stdc++.h>
using namespace std;
int n;
int a[100001];
struct info
{
    int sum,prop;
} tree[3*100001];
void init(int node,int b,int e)
{
    if(b==e)
    {
        tree[node].sum=a[b];
        return ;
    }
    int left=node<<1;
    int right=(node<<1)+1;
    int mid=(b+e)>>1;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node].sum=tree[left].sum+tree[right].sum;
}
void update(int node,int b,int e,int i,int j,int vlue)
{
    if(tree[node].prop)
    {
        tree[node].sum=(e-b+1)*tree[node].prop;
        if(b!=e)
        {
            tree[node<<1].prop=tree[node].prop;
            tree[(node<<1)+1].prop=tree[node].prop;
        }
        tree[node].prop=0;
    }
    if(i>e||j<b)return ;
    if(i<=b&&j>=e)
    {
        tree[node].sum=(e-b+1)*vlue;
        if(b!=e)
        {
            tree[node<<1].prop=vlue;
            tree[(node<<1)+1].prop=vlue;
        }
        tree[node].prop=0;
        return;
    }
    int left=node<<1;
    int right=(node<<1)+1;
    int mid=(b+e)>>1;
    update(left,b,mid,i,j,vlue);
    update(right,mid+1,e,i,j,vlue);
    tree[node].sum=tree[left].sum+tree[right].sum;
}
int query(int node,int b,int e,int i,int j)
{
    if(tree[node].prop)
    {
        tree[node].sum=(e-b+1)*tree[node].prop;
        if(b!=e)
        {
            tree[node<<1].prop=tree[node].prop;
            tree[(node<<1)+1].prop=tree[node].prop;
        }
        tree[node].prop=0;
    }
    if(i>e||j<b)return 0;
    if(i<=b&&j>=e)return tree[node].sum;
    int left=node<<1;
    int right=(node<<1)+1;
    int mid=(b+e)>>1;
    int p=query(left,b,mid,i,j);
    int q=query(right,mid+1,e,i,j);
    return p+q;
}
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)cin>>a[i];
    init(1,1,n);
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        if(x==1)
        {
            int g,h;
            cin>>g>>h;
            cout<<query(1,1,n,g,h)<<endl;
        }
        else
        {
            int g,h,v;
            cin>>g>>h>>v;
            update(1,1,n,g,h,v);
        }
    }
return 0;
}

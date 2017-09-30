#include<bits/stdc++.h>
using namespace std;
struct Z
{
    int sum,lazy;
}tree[3*100005];
void update(int node,int b,int e,int i,int j,int vlue)
{
    if(tree[node].lazy)
    {
        tree[node].sum=(e-b+1)*tree[node].lazy;
        if(b!=e)
        {
            tree[node<<1].lazy=tree[node].lazy;
            tree[(node<<1)+1].lazy=tree[node].lazy;
        }
        tree[node].lazy=0;
    }

    if(i>e||j<b)return;
    if(i<=b&&j>=e)
    {
        tree[node].sum=(e-b+1)*vlue;
        if(b!=e)
        {
            tree[node<<1].lazy=vlue;
            tree[(node<<1)+1].lazy=vlue;
        }
        return ;
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
    if(tree[node].lazy)
    {
        tree[node].sum=(e-b+1)*tree[node].lazy;
        if(b!=e)
        {
            tree[node<<1].lazy=tree[node].lazy;
            tree[(node<<1)+1].lazy=tree[node].lazy;
        }
        tree[node].lazy=0;
    }
    if(i>e||j<b)return 0;
    if(i<=b&&j>=e)return tree[node].sum;
    int lft=node<<1;
    int rt=(node<<1)+1;
    int mid=(b+e)/2;
    return query(lft,b,mid,i,j)+query(rt,mid+1,e,i,j);
}
int main()
{
    int n,q;
    cin>>n>>q;
    while(q--)
    {
        int k,st,en,v;
        cin>>k;
        if(k==1)
        {
            cin>>st>>en>>v;
            update(1,1,n,st,en,v);
        }
        else
        {
            cin>>st>>en;
            cout<<query(1,1,n,st,en)<<endl;
        }

    }

    return 0;
}

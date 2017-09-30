#include<bits/stdc++.h>
using namespace std;
int n;
int a[1000];
int tree[3*1000];
int  init(int node,int b,int e)
{
    if(b==e)
    {
        return tree[node]=a[b];
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    tree[node]=init(left,b,mid)+init(right,mid+1,e);
    return tree[node];
}
int query(int node,int b,int e,int i,int j)
{
    if(i>e||j<b)return 0;
    if(i<=b&&j>=e)return tree[node];
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    LL p=query(left,b,mid,i,j)+query(right,mid+1,e,i,j);
    return p;
}
void update(int node,int b,int e,int ind,int value)
{
    if(ind>e||ind<b)return ;
    if(b==e&&ind==b){tree[node]=value;return;}
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    update(left,b,mid,ind,value);
    update(right,mid+1,e,ind,value);
    tree[node]=tree[left]+tree[right];
}
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)cin>>a[i];
    init(1,1,n);
    for(int i=1;i<=3*n;i++)cout<<tree[i]<<" ";
    cout<<endl;
    int ss,en;
    cin>>ss>>en;
    cout<<query(1,1,n,ss,en)<<endl;
    int ind;
    int v;
    cin>>ind>>v;
    update(1,1,n,ind,v);
    int q,qq;
    cin>>q>>qq;
    cout<<query(1,1,n,q,qq)<<endl;
    //for(int i=1;i<=3*n;i++)cout<<tree[i]<<" ";
    return 0;
}

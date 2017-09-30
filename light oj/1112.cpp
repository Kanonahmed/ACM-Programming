#include<bits/stdc++.h>
#include<iostream>
#define LL long long
using namespace std;
LL n;
LL a[100005];
LL tree[3*100005];
void init(LL node,LL b,LL e)
{
    if(b==e)
    {
        tree[node]=a[b];
        return ;
    }
    LL left=node*2;
    LL right=node*2+1;
    LL mid=(b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node]=tree[left]+tree[right];
}
LL query(LL node,LL b,LL e,LL i,LL j)
{
    if(i>e||j<b)return 0;
    if(i<=b&&j>=e)return tree[node];
    LL left=node*2;
    LL right=node*2+1;
    LL mid=(b+e)/2;
    LL p=query(left,b,mid,i,j);
    LL q=query(right,mid+1,e,i,j);
    return p+q;
}
void update(LL node,LL b,LL e,LL i,LL vlue,int bol)
{
    if(i<b||i>e)return ;
    if(b==e&&i==b)
    {
        if(bol==1)
        tree[node]=0;
        else tree[node]+=vlue;
        return;
    }
    LL left=node*2;
    LL right=node*2+1;
    LL mid=(b+e)/2;
    update(left,b,mid,i,vlue,bol);
    update(right,mid+1,e,i,vlue,bol);
    tree[node]=tree[left]+tree[right];
}
int main()
{
    int tc,t=1;
    scanf("%d",&tc);
    while(tc--)
    {
        int q;
        scanf("%lld %d",&n,&q);
        for(int i=1; i<=n; i++)
            scanf("%lld",&a[i]);
        init(1,1,n);
        printf("Case %d:\n",t++);
        while(q--)
        {
            int x;
            scanf("%d",&x);
            if(x==1)
            {
                LL z;
                scanf("%lld",&z);
                printf("%lld\n",query(1,1,n,z+1,z+1));
                update(1,1,n,z+1,0LL,1);
            }
            else if(x==2)
            {
                LL ind,v;
                scanf("%lld%lld",&ind,&v);
                update(1,1,n,ind+1,v,2);
            }
            else if(x==3)
            {
                LL g,h;
                scanf("%lld%lld",&g,&h);
                printf("%lld\n",query(1,1,n,g+1,h+1));
            }
        }
        memset(tree,0LL,sizeof tree);
        memset(a,0LL,sizeof a);

    }
    return 0;
}

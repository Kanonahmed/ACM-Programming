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
        tree[node].sum+=(e-b+1)*tree[node].lazy;
        if(b!=e)
        {
            tree[node<<1].lazy+=tree[node].lazy;
            tree[(node<<1)+1].lazy+=tree[node].lazy;
        }
        tree[node].lazy=0;
    }

    if(i>e||j<b)return;
    if(i<=b&&j>=e)
    {
        tree[node].sum+=(e-b+1)*vlue;
        if(b!=e)
        {
            tree[node<<1].lazy+=vlue;
            tree[(node<<1)+1].lazy+=vlue;
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
        tree[node].sum+=(e-b+1)*tree[node].lazy;
        if(b!=e)
        {
            tree[node<<1].lazy+=tree[node].lazy;
            tree[(node<<1)+1].lazy+=tree[node].lazy;
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
    int tc,ks=1;
    scanf("%d",&tc);
    while(tc--){
            memset(tree,0,sizeof tree);
       char s[100005];
       scanf("%s",&s);
       int n=strlen(s);
       int q;
       scanf("%d",&q);
       printf("Case %d:\n",ks++);
    while(q--)
    {
        char k[2];
        int fs,ss,l;
        scanf("%s",&k);
        if(k[0]=='I'){
                scanf("%d %d",&fs,&ss);
            update(1,0,n-1,fs-1,ss-1,1);
        }
        if(k[0]=='Q')
        {
            scanf("%d",&l);
            int ans=query(1,0,n-1,l-1,l-1);
            int f=s[l-1]-'0';
            if(ans%2)f^=1;
            printf("%d\n",f);
        }
    }

    }

    return 0;
}

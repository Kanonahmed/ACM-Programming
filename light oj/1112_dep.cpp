#include<bits/stdc++.h>
using namespace std;
int a[100005],n,tree[100005];
void update(int id,int vl,int f)
{
    if(f==1){
   while(id<=n)
   {
       tree[id]+=vl;
       id+=id&(-id);
   }
    }
    else
    {
        while(id<=n)
        {
       tree[id]-=vl;
       id+=id&(-id);
        }
    }
}
int qry(int id)
{
    int sum=0;
    while(id>0)
    {
        sum+=tree[id];
        id-=id&(-id);
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
     memset(a,0,sizeof a);
   int q;
   scanf("%d%d",&n,&q);
   for(int i=1;i<=n;i++)scanf("%d",&a[i]);
   for(int i=1;i<=n;i++)
      update(i,a[i],1);
      printf("Case %d:\n",ks++);
   while(q--)
   {
       int sel;
       scanf("%d",&sel);
       if(sel==1)
       {
           int idd;
           scanf("%d",&idd);
           int fl=qry(idd+1);
             fl-=qry(idd);
             printf("%d\n",fl);
           update(idd+1,fl,2);
       }
       else if(sel==2)
       {
           int idd,vll;
           scanf("%d%d",&idd,&vll);
           update(idd+1,vll,1);
       }
       else
       {
           int bg,en;
           scanf("%d%d",&bg,&en);

           en=qry(en+1);
           en-=qry(bg);
           printf("%d\n",en);
       }
   }



 }

    return 0;
}

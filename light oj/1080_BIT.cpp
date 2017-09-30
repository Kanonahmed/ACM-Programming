#include<bits/stdc++.h>
using namespace std;
int tree[100005],n;
void update(int idx,int vl)
{
    while(idx<=n)
    {
        tree[idx]+=vl;
        idx+=idx&-idx;
    }
}
int qry(int idx)
{
    int sum=0;
    while(idx>0)
    {
        sum+=tree[idx];
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
           char s[100005];
           scanf("%s",&s);
           n=strlen(s);
           int q;
           scanf("%d",&q);
           printf("Case %d:\n",ks++);
           while(q--)
           {
               char k[2];
               scanf("%s",&k);
               int fs,ss;
               if(k[0]=='I')
               {
                   scanf("%d %d",&fs,&ss);
                   update(fs,1);
                   update(ss+1,-1);
               }
               else
               {
                    scanf("%d",&fs);
                    int t=qry(fs);
                    //int h=qry(fs-1);
                    //cout<<t<<" "<<t-h<<endl;
                    int ans=s[fs-1]-'0';
                    if(t%2)ans^=1;
                    printf("%d\n",ans);
               }
           }
   }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
   int tc,ks=1;
   cin>>tc;
   while(tc--)
   {
       int a[105]={0};
       int vis[105]={0};
       int n,k;
       scanf("%d %d",&n,&k);
       for(int i=1;i<=n;i++)
       {
           int x;scanf("%d",&x);
           if(x==i)vis[i]=1;
           a[x]++;
       }
       int ans=0;
       for(int i=1;i<=n;i++)if(a[i]>=k&&!vis[i])ans++;
       printf("%d\n",ans);
   }



}

#include<bits/stdc++.h>
using namespace std;
vector<int>v[100];
int a[100],r,m,n;
int go(int u,int c)
{
    //printf("%d ",u);
   if(a[u])c++;
   else c=0;
   if(c>m)return 0;
   if(v[u].size()==0)return 1;
   int ret=0;
   for(int i=0;i<v[u].size();i++)
   {
       ret+=go(v[u][i],c);
   }
   //printf("%d ",u);
   return ret;
}
int main()
{
   r,n,m;
  cin>>n>>r>>m;
  for(int i=1;i<=n;i++)cin>>a[i];
  for(int i=0;i<r;i++)
  {
      int x,y;
      cin>>x>>y;
      v[x].push_back(y);
  }
  cout<<go(1,0)<<endl;

    return 0;
}

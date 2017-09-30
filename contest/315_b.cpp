#include<bits/stdc++.h>
using namespace std;
int a[100005];
int vis[100005];
queue<int>p;
int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
    {cin>>a[i];vis[a[i]]++;}

  for(int i=1;i<=n;i++)
  {
      if(!vis[i])p.push(i);
  }
  for(int i=0;i<n;i++)
  {
      if(vis[a[i]]>1){vis[a[i]]--;a[i]=p.front();p.pop();}
      else if(a[i]>n){a[i]=p.front();p.pop();}
  }
  for(int i=0;i<n;i++)cout<<a[i]<<" ";
//  do
//  {
//      for(int i=0;i<n;i++)cout<<a[i]<<" ";
//      cout<<endl;
//  }while(next_permutation(a,a+n));
    return 0;
}

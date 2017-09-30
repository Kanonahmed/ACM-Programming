#include<bits/stdc++.h>
using namespace std;
int vis[30000];
int a[30000];
int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++){cin>>a[i];vis[a[i]]++;}
  sort(a,a+n);
  int sum=0;
  for(int i=0;i<n;i++)
  {
      if(vis[a[i]]>=2)
      {
          int s=0;
          int j=1;
          int tmp=a[i];
          while(vis[a[i]])
          {
              int h=a[i]+j;
              s=j;
              if(!vis[h]){vis[tmp]--;vis[h]=1;break;}
              j++;

          }
          sum+=s;
      }
  }
  cout<<sum<<endl;
    return 0;
}

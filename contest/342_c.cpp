#include<bits/stdc++.h>
using namespace std;
int a[505][505];
int n,m;
int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        a[x][y]=1;
        //a[y][x]=1;
    }

  for(int i=1;i<n;i++)
  {
      int u=i;
      int cnt=1;
      while(a[u][u+1]&&u<=n)
      {
          cnt++;u++;
      }
//      int q=1;
//      u=i;
//      while(a[u][u-1]&&u>1)
//      {
//          u--;q++;
//      }
      if(cnt>=n)
      {
          cout<<"Yes"<<endl;
          for(int i=0;i<n;i++)cout<<"a";
          cout<<endl;
          return 0;
      }
  }
  cout<<"No"<<endl;

    return 0;
}

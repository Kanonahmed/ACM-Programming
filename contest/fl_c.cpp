#include<bits/stdc++.h>
using namespace std;
int main()
{
  int q;
  cin>>q;
  while(q--)
  {
      int a[300][300];
      int n;
      cin>>n;
      for(int i=0;i<2*n;i++)
          for(int j=0;j<2*n;j++)cin>>a[i][j];
          int sum=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
        {
             int r1=i;
             int r2=2*n-i-1;
             int c1=j;
             int c2=2*n-j-1;
             int mx=max(max(a[r1][c1],a[r2][c1]),max(a[r1][c2],a[r2][c2]));
             sum+=mx;
        }
            cout<<sum<<endl;

  }


    return 0;
}


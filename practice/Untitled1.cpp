#include<bits/stdc++.h>
using namespace std;
int main()
{

  for(int i=1;i<=n;i++)
  {
      int tmp=n-i;
      for(int j=1;j<=tmp;j++)
          cout<<" ";
          for(int j=tmp+1;j<=n;j++)
            cout<<"#";
          cout<<endl;
  }


    return 0;
}

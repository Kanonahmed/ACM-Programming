#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int best=0;
  int sum=0;
  for(int i=0;i<n;i++)
  {
      int x,y;
      cin>>x>>y;
    sum=sum-x+y;
    best=max(best,sum);
  }
  cout<<best<<endl;
    return 0;
}

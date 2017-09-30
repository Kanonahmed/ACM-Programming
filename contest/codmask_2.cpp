#include<bits/stdc++.h>
using namespace std;
int main()
{
  int tc,ks=1;
  cin>>tc;
  while(tc--)
  {
      int n;
      cin>>n;
      if(n<=2)
        printf("Case %d: Tie\n",ks++);
      else
      {
          if(n%2)printf("Case %d: CodeForces\n",ks++);
          else printf("Case %d: CodeMask\n",ks++);
      }
  }
    return 0;
}

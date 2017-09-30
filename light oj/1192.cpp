#include<bits/stdc++.h>
using namespace std;
int main()
{
  int tc,ks=1;
  scanf("%d",&tc);
  while(tc--)
  {
    int n;
    scanf("%d",&n);
    int res=0;
    for(int i=0;i<n;i++)
    {
        int g,w;
        scanf("%d%d",&g,&w);
        res^=(w-g-1);
    }
   if(res)printf("Case %d: Alice\n",ks++);
   else printf("Case %d: Bob\n",ks++);
  }
    return 0;
}

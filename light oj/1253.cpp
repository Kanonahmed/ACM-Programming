#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
  int tc,ks=1;
  scanf("%d",&tc);
  while(tc--)
  {
    int k;
    scanf("%d",&k);
    int res=0,cnt=0;
    for(int i=0;i<k;i++)
    {
        int p;scanf("%d",&p);
        if(p==1)cnt++;
        res^=p;
    }
    if(cnt==k)
    {
        if(k%2==0)printf("Case %d: Alice\n",ks++);
        else printf("Case %d: Bob\n",ks++);
    }
    else{
      if(res)printf("Case %d: Alice\n",ks++);
      else printf("Case %d: Bob\n",ks++);
    }
  }


    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
      int n;
      scanf("%d",&n);
      int l=1,hi=n;
      int best=0;
      while(l<=hi)
      {
          int m=(l+hi)/2;
          int ans=2*m;
          if(ans<=n)
          {
              best=max(best,m);
              l=m+1;
          }
          else hi=m-1;
      }
      //cout<<best<<endl;
//      int cnt=0;
//      for(int i=1;i<=best;i++)
//          for(int j=i;j<=best;j++)
//            for(int k=j;k<=best;k++)
//              if((i+j+k)==n)cnt++;
              if(best%3==0)best--;
              printf("%d\n",best);

  }



    return 0;
}

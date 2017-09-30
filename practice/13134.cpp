#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL cnt[1003],dp[1003],id[1003];
int main()
{
  LL a,c,m,x,q,n;
  while(cin>>a>>c>>m>>x>>q>>n)
  {
      memset(id,0,sizeof id);
      memset(dp,0,sizeof dp);
      memset(cnt,0,sizeof cnt);
      dp[0]=0;
      dp[1]=x;
      cnt[x]++;
      id[x]=1;
      int ses=n;
      for(int i=2;i<=n;i++)
      {
        LL fn=(a*dp[i-1]+c)%m;
        if(id[fn])
        {
             ses=i-1;
               int st=id[fn];
               int len=i-st;
               int baki=(n-i+1);
               int kotobar=baki/len;
               int extra=baki%len;
               for(int j=st;j<=(i-1);j++)
               {
                   cnt[dp[j]]+=kotobar;
                   if(extra>0)cnt[dp[j]]++,extra--;
               }
               break;
        }
        dp[i]=fn;
        id[fn]=i;
        cnt[fn]++;
      }
      sort(dp+1,dp+ses+1);
      for(int k=0;k<q;k++)
      {
          int p;
          cin>>p;
          LL trac=0;
          for(int j=1;j<=ses;j++)
          {
              trac+=cnt[dp[j]];
              if(trac>=p){cout<<dp[j]<<endl;break;}
          }
      }

  }



    return 0;
}

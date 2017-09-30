#include<bits/stdc++.h>
#define LL long long
using namespace std;
bool vis[105];
int pr[105],cnt[10002],k;
void seive()
{
    pr[0]=2;
    for(int i=3;i<=102;i+=2)
    {
        if(!vis[i])
        {
            pr[++k]=i;
            for(int j=2*i;j<=102;j+=i)vis[j]=1;
        }
    }
}
int main()
{
    seive();
  int tc,ks=1;
  cin>>tc;
  while(tc--)
  {
      memset(cnt,0,sizeof cnt);
      int n;
      scanf("%d",&n);
      for(int i=0;i<n;i++)
      {
          int x;
          scanf("%d",&x);
          int q=sqrt(x);
          for(int l=0;pr[l]<=q&&l<=k;l++)
          {
              if(x%pr[l]==0)
              {
                  int c=0;
                  while(x%pr[l]==0)c++,x/=pr[l];
                  cnt[pr[l]]=max(cnt[pr[l]],c);
              }
          }
          if(x>1)cnt[x]=max(cnt[x],1);
      }
       string ans="1";
      for(int j=2;j<=10000;j++)
      {
          int res=1;
          if(cnt[j])
          {
              for(int k=1;k<=cnt[j];k++)res*=j;
              int carry=0;
              for(int i=0;i<ans.size();i++)
              {
                  carry+=(ans[i]-48)*res;
                  ans[i]=(carry%10+48);
                  carry/=10;
              }
              while(carry){ans+=(carry%10+48);carry/=10;}
          }
      }
      reverse(ans.begin(),ans.end());
      printf("Case %d: ",ks++);
      cout<<ans<<endl;
  }



    return 0;
}

#include<bits/stdc++.h>
using namespace std;
char s[100005];
int chk[500];
bool ok(int x,int cnt,int n)
{
    int cn[500]={0};
    int cc[500]={0};
    for(int i=1;i<=n;i++)
    {
        if(i<=x)
        {
            cn[s[i]]++;
            if(cc[s[i]]==0){cnt--;cc[s[i]]=1;}
            if(cnt==0)return 1;
        }
        else
        {
            if(cc[s[i]]==0){cnt--;cc[s[i]]=1;}
            cn[s[i]]++;
            cn[s[i-x]]--;
            if(cn[s[i-x]]==0){cnt++;cc[s[i-x]]=0;}
            if(cnt==0)return 1;
        }
    }
    return 0;
}
int main()
{
   int n,cnt=0,ans;
   cin>>n;
   scanf("%s",s+1);
   for(int i=1;i<=n;i++)if(chk[s[i]]==0){cnt++;chk[s[i]]=1;}
   ans=n;
   int lo=1,hi=n;
   while(lo<=hi)
   {
       int mid=(lo+hi)/2;
       if(ok(mid,cnt,n))ans=min(ans,mid),hi=mid-1;
       else lo=mid+1;
   }
  cout<<ans<<endl;

    return 0;
}

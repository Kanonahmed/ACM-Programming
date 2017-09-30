#include<bits/stdc++.h>
using namespace std;
int a[3]={1,2,5};
int b[10005],n;
int dp[4][1010];
int save[1010];
int go(int p,int tk)
{
    if(p==3)
    {
        if(tk==0)return 0;
        return 100000000;
    }
    int &rt=dp[p][tk];
    if(rt!=-1)return rt;
    rt=1000000000;
   if(tk-a[p]>=0)rt=min(rt,1+go(p,tk-a[p]));
   rt=min(rt,go(p+1,tk));
   return rt;
}
int main()
{
 int tc;
 cin>>tc;
 while(tc--)
 {
     cin>>n;
     for(int i=0;i<n;i++)cin>>b[i];
     sort(b,b+n);
     int mn=b[0];
     int sum=0;
     memset(dp,-1,sizeof dp);
     memset(save,-1,sizeof save);
     int best=100000000;
     for(int j=0;j<=5;j++){
     int ans=0;
     for(int i=0;i<n;i++){
            int vl=b[i]-mn+j;
            if(save[vl]!=-1)ans+=save[vl];
            else{
            save[vl]=go(0,vl);
            ans+=save[vl];
            }
     }
     best=min(best,ans);
     }
     cout<<best<<endl;
 }


    return 0;
}

#include<bits/stdc++.h>
#define LL long long
using namespace std;
string s,s1;
int len,len1;
pair<LL,LL> dp[35][35];

pair<LL,LL> go(int p,int q)
{
    if(dp[p][q].second!=-1)return dp[p][q];
    if(p==len&&q==len1)return dp[p][q]={1,0};
    else if(p==len&&q<len1)return dp[p][q]={1,len1-q};
    else if(q==len1&&p<len)return dp[p][q]={1,len-p};
    LL ret=100000;
    if(s[p]==s1[q])ret=min(ret,go(p+1,q+1).second);
    else
    {
        ret=min(ret,go(p+1,q).second);
        ret=min(ret,go(p,q+1).second);
    }
    LL w=0;
    if(s[p]==s1[q]){if(ret==go(p+1,q+1).second)w+=go(p+1,q+1).first;}
    else
    {
        if(go(p+1,q).second==ret)w+=go(p+1,q).first;
        if(go(p,q+1).second==ret)w+=go(p,q+1).first;
    }

   dp[p][q]={w,1+ret};
   return dp[p][q];

}
int main()
{
    int tc,ks=1;
    cin>>tc;
    while(tc--)
    {
        cin>>s>>s1;
        len=s.size();
        len1=s1.size();
        memset(dp,-1,sizeof dp);
        pair<LL,LL>res=go(0,0);
        cout<<"Case "<<ks++<<": "<<res.second<<" "<<res.first<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
#define LL long long
using namespace std;
string s;
LL dp[62][62];
LL go(int i,int j)
{
    if(i>j)return 0;
    if(i==j)return 1;
    LL &ptr=dp[i][j];
    if(ptr!=-1)return ptr;
    ptr=0;
    if(s[i]==s[j])ptr+=1+go(i,j-1)+go(i+1,j);
    else
        ptr+=go(i,j-1)+go(i+1,j)-go(i+1,j-1);
    return ptr;

}
int main()
{
    int tc,ks=1;
    cin>>tc;
    while(tc--)
    {
       cin>>s;
       int l=s.size();
       memset(dp,-1,sizeof dp);
       LL res=go(0,l-1);
       printf("Case %d: %lld\n",ks++,res);
    }

    return 0;
}

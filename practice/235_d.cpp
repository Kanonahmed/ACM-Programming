#include<bits/stdc++.h>
using namespace std;
int n,k,d;
int digit[20];
int dp[1<<18][20];
int go(int m,int md,int pos)
{
    if(m==(1<<d)-1)
    {
        if(md==0)return 1;
        else return 0;
    }
    int &ptr=dp[m][pos];
    if(ptr!=-1)return ptr;
    ptr=0;
    for(int i=0; i<d; i++)
    {
        if(!m&&digit[i]==0)continue;
        if((m&(1<<i))==0)
        {
            ptr+=go(m|(1<<i),(md*10+digit[i])%k,i);
        }
    }
    return ptr;
}
int main()
{
    cin>>n>>k;
    while(n)
    {
        int rem=n%10;
        n/=10;
        digit[d++]=rem;
    }
    memset(dp,-1,sizeof dp);
    cout<<go(0,0,18)<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int c[55],dp[55][55];
int go(int b,int e)
{
    //cout<<b<<" "<<e<<endl;
    //getchar();
    if(b+1==e)return 0;
    int &pt=dp[b][e];
    if(pt!=-1)return pt;
    pt=1000000000;
    for(int m=b+1;m<e;m++)
        pt=min(pt,c[e]-c[b]+go(b,m)+go(m,e));
        return pt;
}
int main()
{
    int l;
    while(cin>>l&&l)
    {
        int n;
        cin>>n;
        //memset(c,0,sizeof c);
        for(int i=1;i<=n;i++)cin>>c[i];
        c[0]=0;c[n+1]=l;
        memset(dp,-1,sizeof dp);
        int re=go(0,n+1);
        cout<<"The minimum cutting is "<<re<<"."<<endl;
    }



    return 0;
}

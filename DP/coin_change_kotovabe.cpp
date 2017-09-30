#include<bits/stdc++.h>
using namespace std;
int coin[]={5,8,3,1};
int DP[5][100];
int change(int i,int am)
{
    if(i==4)
    {
        if(am==0)return 1;
        else return 0;
    }
    if(DP[i][am]!=-1)return DP[i][am];
    int r1=0,r2=0;
    if(am-coin[i]>=0)
        r1=change(i,am-coin[i]);
        r2=change(i+1,am);
        DP[i][am]=r1+r2;
        return DP[i][am];
}
int main()
{
    int taka;
    memset(DP,-1,sizeof DP);
    cin>>taka;
    cout<<change(0,taka)<<endl;


    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int coin[22];
long long DP[22][10002];
long long change(int i,int taka)
{
    if(i>=21)
    {
        if(taka==0)return 1;
        else return 0;
    }
    if(DP[i][taka]!=-1)return DP[i][taka];

    long long r1=0,r2=0;
    if(taka-coin[i]>=0)
        r1=change(i,taka-coin[i]);

        r2=change(i+1,taka);
        DP[i][taka]=r1+r2;
        return DP[i][taka];
}
int main()
{
    for(int i=1;i<=21;i++)
        coin[i-1]=i*i*i;
        memset(DP,-1,sizeof DP);
     int amount;
    while(cin>>amount)
    {

   cout<<change(0,amount)<<endl;

    }

    return 0;
}

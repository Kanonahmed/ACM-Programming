#include<bits/stdc++.h>
using namespace std;
int coin[]= {50,25,10,5,1};
int DP[6][8000];
int change(int i,int taka)
{
    if(i>=5)
    {
        if(taka==0)return 1;
        else return 0;
    }
    if(DP[i][taka]!=-1)return DP[i][taka];

    int r1=0,r2=0;

    if(taka-coin[i]>=0)
        r1=change(i,taka-coin[i]);

    r2=change(i+1,taka);

    DP[i][taka]=r1+r2;

    return DP[i][taka];
}
int main()
{
    int amount;
    memset(DP,-1,sizeof DP);
    while(cin>>amount)
    {
        cout<<change(0,amount)<<endl;
    }


    return 0;
}

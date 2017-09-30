#include<bits/stdc++.h>
using namespace std;
int coin[]={5,3,8,9};
int DP[5][100];
int change(int pos,int taka)
{
     if(pos>=4)
     {
         if(taka==0)return 1;
         else return 0;
     }
     if(DP[pos][taka]!=-1)return DP[pos][taka];
     int r1=0,r2=0;
     if((taka-coin[pos])>=0)
        r1=change(pos,taka-coin[pos]);
         r2=change(pos+1,taka);
         DP[pos][taka]=r1|r2;
         return DP[pos][taka];
}
int main()
{
  int value;
  cin>>value;
  memset(DP,-1,sizeof DP);
  cout<<change(0,value)<<endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int coin[]={50,25,10,5,1};
int DP[6][10001];
int change(int i,int value)
{
    if(i>=5)
    {
        if(value==0)return 1;
        else return 0;
    }
   //if(DP[i][value]!=-1)return DP[i][value];
   // int r1=0,r2=0;
   // if(value-coin[i]>=0)r1=change(i,value-coin[i]);
   // r2=change(i+1,value);

   // DP[i][value]=r1+r2;
   // return DP[i][value];
   int &ptr=DP[i][value];
   if(ptr!=-1)return ptr;
   ptr=0;
   if(value-coin[i]>=0)ptr+=change(i,value-coin[i]);
   ptr+=change(i+1,value);
   return ptr;
}
int main()
{
    int taka;
    memset(DP,-1,sizeof DP);
    while(cin>>taka)
    {
        cout<<change(0,taka)<<endl;
    }

    return 0;
}

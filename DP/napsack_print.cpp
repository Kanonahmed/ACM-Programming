#include<bits/stdc++.h>
using namespace std;
int coin[]={1,3,5};
int DP[3][100];
int direction[3][100];
const int inf=1000;
int change(int pos,int taka)
{
    if(pos>=3)
    {
        if(taka==0)return 0;
        else return inf;
    }
    int r1=inf,r2=inf;
    if(taka-coin[pos]>=0)
    r1=change(pos,taka-coin[pos])+1;
    r2=change(pos+1,taka);
    if(r1<r2)
    {
        direction[pos][taka]=1;
    }
    else direction[pos][taka]=0;
    return DP[pos][taka]=min(r1,r2);
}
void print(int pos,int taka)
{
    if(taka==0)return ;
    if(taka<0)return ;
    if(direction[pos][taka]==1)
    {
        cout<<coin[pos]<<" ";
        print(pos,taka-coin[pos]);
    }
    else print(pos+1,taka);
}
int main()
{
   int amount;
   cin>>amount;
   memset(DP,-1,sizeof DP);
  cout<<change(0,amount)<<endl;
  print(0,amount);
    return 0;
}

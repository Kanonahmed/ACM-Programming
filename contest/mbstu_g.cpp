#include<bits/stdc++.h>
using namespace std;
int l1,l2;
int DP[2002][2002];
string a,b;
int dp(int row,int col)
{
    if(row==l1&&col==l2)return 0;
     else if(row==l1)return col;
     else if(col==l2)return row;
    int &res=DP[row][col];
    if(res!=-1)return res;
    res=1000000;
    if(a[row]==b[col])res=min(res,dp(row+1,col+1));
    else
    {
        res=min(1+dp(row+1,col),min(1+dp(row,col+1),1+dp(row+1,col+1)));
    }
    return res;
}
int main()
{
     int tc;
     cin>>tc;
     while(tc--)
     {
         memset(DP,-1,sizeof DP);
         cin>>a>>b;
         l1=a.size();
         l2=b.size();
         cout<<dp(0,0)<<endl;

     }

    return 0;
}

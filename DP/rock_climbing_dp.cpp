#include<bits/stdc++.h>
using namespace std;
int mat[][15]={{-1,2,5},{4,-2,3},{1,2,10}};
int r=3,c=3;
int DP[15][15];
int rock(int row,int col)
{
    if(row>=0&&row<r&&col>=0&&col<c)
    {
        if(DP[row][col]!=-1)return DP[row][col];
        int r=-2;
        r=max(r,rock(row+1,col)+mat[row][col]);
        r=max(r,rock(row+1,col-1)+mat[row][col]);
        r=max(r,rock(row+1,col+1)+mat[row][col]);
        DP[row][col]=r;
        return DP[row][col];
    }
    else return 0;
}
int main()
{
  memset(DP,-1,sizeof DP);
  cout<<rock(0,0)<<endl;


    return 0;
}

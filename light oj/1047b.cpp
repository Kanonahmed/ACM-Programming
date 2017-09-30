#include<bits/stdc++.h>
using namespace std;
int color[22][3];
int DP[22][3];
int n;
int go(int row,int cc)
{
    if(row>=n)return 0;
    if(DP[row][cc]!=-1)return DP[row][cc];
    int res=100000;
    for(int k=0;k<3;k++)
    {
        if(k!=cc)res=min(res,go(row+1,k)+color[row][cc]);
        DP[row][cc]=res;
    }
    return DP[row][cc];
}
int t=10000;
int mx(int l,int c)
{
    int m=go(l,c);
    if(t>go(l,c))t=go(l,c);
    if(c==2)return t;
    mx(l,c+1);
}
int main()
{
   int tc;
   cin>>tc;
   while(tc--)
   {
       cin>>n;
       for(int i=0;i<n;i++)
       {
           int x,y,z;
           cin>>x>>y>>z;
           color[i][0]=x;
           color[i][1]=y;
           color[i][2]=z;
       }
       memset(DP,-1,sizeof DP);
       int l=mx(0,0);
       cout<<l<<endl;
   }

    return 0;
}

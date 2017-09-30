#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL md[22];
struct matrix
{
    LL m[5][5];
};
matrix mul(matrix a,matrix b,LL mm)
{
    matrix rss;
    for(int fsr=0;fsr<2;fsr++)
        for(int sc=0;sc<2;sc++)
        {
               LL bal=0;
              for(int sr=0;sr<2;sr++){
                bal+=(a.m[fsr][sr]*b.m[sr][sc])%mm;
                bal%=mm;}
                rss.m[fsr][sc]=bal;
        }
        return rss;
}
int main()
{
    md[0]=1;
    for(int i=1; i<=20; i++)md[i]=md[i-1]*2LL;
    LL n,m;
    while(cin>>n>>m)
    {
        matrix tmp,rs;
       tmp.m[0][0]=1;
       tmp.m[0][1]=1;
       tmp.m[1][0]=1;
       tmp.m[1][1]=0;
       rs.m[0][0]=1;
       rs.m[1][0]=0;
       rs.m[0][1]=0;
       rs.m[1][1]=0;
       while(n)
       {
           if(n%2)rs=mul(tmp,rs,md[m]);
           tmp=mul(tmp,tmp,md[m]);
           n/=2;
       }
       printf("%lld\n",rs.m[1][0]);
    }


    return 0;
}

#include <bits/stdc++.h>
#define LL long long
using namespace std;
LL n,md,d;
struct matrix
{
    LL m[20][20];
};
matrix mul(matrix a,matrix b)
{
    matrix rss;
    for(int fsr=0;fsr<d;fsr++)
        for(int sc=0;sc<d;sc++)
        {
               LL bal=0LL;
              for(int sr=0;sr<d;sr++){
                bal+=(a.m[fsr][sr]*b.m[sr][sc])%md;
                bal%=md;
                }
                rss.m[fsr][sc]=bal;
        }

        return rss;
}
matrix go(matrix mt,LL p)
{
    if(p==1LL)return mt;
    matrix ans=go(mt,p/2LL);
    ans=mul(ans,ans);
    if(p%2LL)ans=mul(ans,mt);
    return ans;
}
int main()
{
    while(cin>>d>>n>>md)
    {
        if(!n&&!d&&!md)break;
        matrix tmp;
        memset(tmp.m,0,sizeof(tmp.m));
        LL cof[20],ff[20];
        for(int i=0;i<d;i++)cin>>cof[i];
        for(int i=0;i<d;i++)cin>>ff[i];

        for(int j=0;j<d;j++)tmp.m[0][j]=cof[j];
        for(int i=1;i<d;i++)tmp.m[i][i-1]=1LL;

         if(n<=d)
       printf("%lld\n",ff[n-1]%md);
       else
       {
           matrix ans=go(tmp,n-d);
           LL rs=0;
           for(int i=0;i<d;i++)
           {
               rs+=(ans.m[0][i]*ff[d-i-1])%md; // according to problem statement you have to calculate
               rs%=md;
           }
           printf("%lld\n",rs);
       }
    }


    return 0;
}



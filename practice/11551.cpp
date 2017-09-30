#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL n,r;
struct matrix
{
    LL D[55][55];
};
matrix mul(matrix a,matrix b)
{
    matrix res;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
         {
              LL bal=0;
              for(int k=0;k<n;k++)bal+=(a.D[i][k]*b.D[k][j])%1000LL,bal%=1000LL;
              res.D[i][j]=bal;
         }
         return res;
}
matrix pow(matrix m,LL p)
{
    if(p==1)return m;
    matrix rs=pow(m,p/2LL);
    rs=mul(rs,rs);
    if(p%2LL)rs=mul(rs,m);
    return rs;
}
int main()
{
  int tc;
  scanf("%d",&tc);
  while(tc--)
  {
     matrix tmp;
     memset(tmp.D,0,sizeof tmp.D);
    LL a[55];
    scanf("%lld%lld",&n,&r);
    for(int i=0;i<n;i++)scanf("%lld",&a[i]);
    for(int i=0;i<n;i++)
    {
        LL x;
        scanf("%lld",&x);
        for(int j=0;j<x;j++)
        {
            int p;scanf("%d",&p);
            tmp.D[i][p]=1;
        }
    }

    matrix ans=pow(tmp,r);
    for(int i=0;i<n;i++)
    {
        LL rs=0;
        for(int j=0;j<n;j++)rs+=(ans.D[i][j]*a[j])%1000LL,rs%=1000LL;
        if(i==0)
        printf("%lld",rs);
        else printf(" %lld",rs);
    }
    puts("");

  }

    return 0;
}

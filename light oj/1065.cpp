#include<bits/stdc++.h>
#define LL long long
using namespace std;
struct matrix
{
    LL D[2][2];
};
LL a,b,n,m,MD;
matrix mul(matrix a,matrix b)
{
    matrix res;
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
          {
             LL bal=0LL;
            for(int k=0;k<2;k++)
            {
                bal+=(a.D[i][k]*b.D[k][j])%MD;
                bal%=MD;
            }
            res.D[i][j]=bal;
          }

          return res;
}
matrix pow(matrix m,LL p)
{
    if(p==1LL)return m;
    matrix rs=pow(m,p/2LL);
    rs=mul(rs,rs);
    if(p%2LL)rs=mul(rs,m);
    return rs;
}
int main()
{
  int tc,ks=1;
  cin>>tc;
  while(tc--)
  {
      scanf("%lld %lld %lld %lld",&a,&b,&n,&m);

      matrix tmp;
      tmp.D[0][0]=tmp.D[0][1]=tmp.D[1][0]=1LL;
      tmp.D[1][1]=0LL;

      MD=1LL;
      for(int i=1;i<=m;i++)MD*=10LL;
         a%=MD;
         b%=MD;

      if(n>1)
      {
          matrix ans=pow(tmp,n-1LL);
          LL ret=0LL;
            ret=(ans.D[0][0]*b)%MD+(ans.D[0][1]*a)%MD;
            ret%=MD;
          printf("Case %d: %lld\n",ks++,ret);
      }
      else
      {
          if(n==0)printf("Case %d: %lld\n",ks++,a);
          if(n==1)printf("Case %d: %lld\n",ks++,b);
      }
  }



    return 0;
}

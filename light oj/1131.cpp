#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL M;
struct matrix
{
    LL D[6][6];
};
matrix mul(matrix a,matrix b)
{
    matrix res;
    for(int i=0;i<6;i++)
        for(int j=0;j<6;j++)
          {
              LL bal=0;
              for(int k=0;k<6;k++)bal+=(a.D[i][k]*b.D[k][j])%M,bal%=M;
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
   int tc,ks=1;
   scanf("%d",&tc);
   while(tc--)
   {

       LL a,a1,b,b1,c,c1,f[3],g[3];
       scanf("%lld%lld%lld",&a,&b,&c);
       scanf("%lld%lld%lld",&a1,&b1,&c1);
       scanf("%lld%lld%lld",&f[0],&f[1],&f[2]);
       scanf("%lld%lld%lld",&g[0],&g[1],&g[2]);
       scanf("%lld",&M);
       matrix tmp;

       int q;
       scanf("%d",&q);
       printf("Case %d:\n",ks++);
       while(q--){
            LL n;
            scanf("%lld",&n);
       if(n<=2)
       {
           printf("%lld %lld\n",f[n]%M,g[n]%M);
       }
       else
       {
        memset(tmp.D,0,sizeof tmp.D);
       tmp.D[0][0]=a;
       tmp.D[0][1]=b;
       tmp.D[0][5]=c;
       tmp.D[1][0]=tmp.D[2][1]=1;
       tmp.D[3][2]=c1;
       tmp.D[3][3]=a1;
       tmp.D[3][4]=b1;
       tmp.D[4][3]=tmp.D[5][4]=1;
           matrix ans=pow(tmp,n-2LL);
           LL fans=0,gans=0;
           for(int i=0;i<6;i++)
            if(i<3)
              fans+=(ans.D[0][i]*f[3-i-1])%M,fans%=M;
           else
           {
               fans+=(ans.D[0][i]*g[(6-i)-1])%M,fans%=M;
           }

       for(int i=0;i<6;i++)
            if(i<3)
              gans+=(ans.D[3][i]*f[3-i-1])%M,gans%=M;
           else
           {
               gans+=(ans.D[3][i]*g[(6-i)-1])%M,gans%=M;
           }

           printf("%lld %lld\n",fans,gans);
       }

       }

   }

    return 0;
}

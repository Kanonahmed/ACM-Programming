#include<bits/stdc++.h>
#define LL long long
using namespace std;
const LL M=10007;
LL n,a,b,c;
struct matrix
{
    LL D[5][5];
};
matrix mul(matrix a,matrix b)
{
    matrix res;
    for(int i=0;i<4;i++)
    for(int j=0;j<4;j++){
        LL bal=0;
        for(int k=0;k<4;k++)
            bal+=(a.D[i][k]*b.D[k][j])%M,bal%=M;
        res.D[i][j]=bal;
    }
    return res;
}

matrix pow(matrix m,LL p)
{
    if(p==1)return m;
    matrix rs=pow(m,p/2);
    rs=mul(rs,rs);
    if(p%2)rs=mul(rs,m);
    return rs;
}
int main()
{
   int tc,ks=1;
   scanf("%d",&tc);
   while(tc--)
   {
       scanf("%lld%lld%lld%lld",&n,&a,&b,&c);
        matrix tmp;
        tmp.D[0][0]=a;tmp.D[1][0]=1;tmp.D[1][1]=tmp.D[1][2]=tmp.D[1][3]=0;
        tmp.D[0][1]=0;tmp.D[2][0]=0;tmp.D[2][1]=1;tmp.D[2][2]=tmp.D[2][3]=0;
        tmp.D[0][2]=b;tmp.D[3][0]=tmp.D[3][1]=tmp.D[3][2]=0;tmp.D[3][3]=1;
        tmp.D[0][3]=1;
        if(n<=2)
        {
             printf("Case %d: 0\n",ks++);
        }
        else
        {
            matrix ans=pow(tmp,n-2LL);
            LL rt=0;
            rt=(ans.D[0][3]*c)%M;
            printf("Case %d: %lld\n",ks++,rt);
        }
   }
    return 0;
}

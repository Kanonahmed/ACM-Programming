#include<bits/stdc++.h>
#define LL unsigned long long
using namespace std;
struct matrix
{
    LL D[2][2];
};
matrix mul(matrix a,matrix b)
{
    matrix res;
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
        {
            LL bal=0;
            for(int k=0;k<2;k++)bal+=(a.D[i][k]*b.D[k][j]);
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

     LL p,q,n;
     scanf("%llu %llu %llu",&p,&q,&n);
     //cout<<p<<" "<<q<<" "<<n<<endl;
     matrix tmp;
     memset(tmp.D,0,sizeof tmp.D);
     tmp.D[0][0]=p;
     tmp.D[0][1]=-q;
     tmp.D[1][0]=1;
     if(n==0)
     {
         printf("Case %d: 2\n",ks++);
     }
     else if(n==1)printf("Case %d: %llu\n",ks++,p);
     else
     {
         matrix ans=pow(tmp,n-1);
         LL res=0;
         res+=ans.D[0][0]*p+ans.D[0][1]*2LL;
         printf("Case %d: %llu\n",ks++,res);
     }



  }

    return 0;
}

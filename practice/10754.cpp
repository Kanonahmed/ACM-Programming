#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL n,m,k,c[22],a[22];
struct matrix
{
    LL D[22][22];
};
matrix mul(matrix a,matrix b)
{
    matrix ans;
    for(int r=0;r<=k;r++)
        for(int c=0;c<=k;c++)
    {
        LL bal=0LL;
          for(int sc=0;sc<=k;sc++)
          {
              bal+=(a.D[r][sc]*b.D[sc][c])%m;
              bal%=m;
          }
          ans.D[r][c]=bal;
    }
    return ans;
}
matrix bigmod(matrix a,LL p)
{
    if(p==1LL)return a;
    matrix rs=bigmod(a,p/2LL);
    rs=mul(rs,rs);
    if(p%2LL)rs=mul(rs,a);
    return rs;
}
int main()
{
    int tc;
    cin>>tc;
  while(tc--)
   {
       cin>>k>>m>>n;
     for(int i=0;i<=k;i++){cin>>c[i];c[i]=(m+(c[i]%m))%m;}
     for(int i=0;i<k;i++){cin>>a[i];a[i]=(m+(a[i]%m))%m;}
     matrix tmp;
     memset(tmp.D,0,sizeof(tmp.D));
     for(int i=0;i<k;i++)tmp.D[0][i]=c[i];
     tmp.D[0][k]=1;
     for(int i=1;i<k;i++)
        tmp.D[i][i-1]=1;
        tmp.D[k][k]=1;
        if(n<k)printf("%lld\n",(m+a[n]%m)%m);
        else{
        matrix ans=bigmod(tmp,n-k+1);
        LL rs=0;
        for(int i=0;i<k;i++)
        {
            rs+=(ans.D[0][i]*a[k-i-1])%m;
            rs%=m;
        }
        rs+=(ans.D[0][k]*c[k])%m;
        rs%=m;

               printf("%lld\n",rs);
        }
        if(tc)printf("\n");

   }


    return 0;
}

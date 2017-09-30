#include<bits/stdc++.h>
using namespace std;
const int N=10000000;
int a[10000000],b[10000000];
void prime()
{
    int q=sqrt(N);
    for(int i=4;i<=N;i+=2)
        a[i]=1;
    for(int i=3;i<=q;i+=2)
    {
        for(int j=2*i;j<=N;j+=i)
            a[j]=1;
    }
    int k=0;
    for(int i=2;i<=N;i++)
    {
        if(a[i]==0)
        {
            b[k]=i;
            k++;
        }
    }

}
int main()
{
    int n,m,maz,tc;
//    scanf("%d",&tc);
//    while(n--)
//    {
        scanf("%d %d",&n,&m);
//    }

for(int i=n;i<=m;i++ )
{
    if(a[i]==0)
       printf(" %d",i);
}
    return 0;
}

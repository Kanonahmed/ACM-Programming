#include<bits/stdc++.h>
using namespace std;
int bit[35];
int num(int n)
{
    int count=0,k=0;
    memset(bit,0,sizeof bit);
    while(n)
    {
        int rem=n%2;
        bit[k++]=rem;
        n=n/2;
    }
    for(int i=0; i<=k; i++)
    {
        if(bit[i]==1&&bit[i+1]==0)
        {
            swap(bit[i],bit[i+1]);
            reverse(bit,bit+i);
            break;
        }
    }
    for(int i=k; i>=0; i--)
        count+=bit[i]*pow(2,i);
    return count;
}
int main()
{
    int tc,t=1;
    scanf("%d",&tc);
    while(tc--)
    {
        int d,n,p;
        scanf("%d",&n);
        d=num(n);
        printf("Case %d: %d\n",t,d);
        t++;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
double digit[1000005]={0.0};
int main()
{
    int t=1;
    for(int i=1;i<=1000000;i++)digit[i]=digit[i-1]+log10(i);
    int tc;
    cin>>tc;
    while(tc--)
    {
   int n,base;
   cin>>n>>base;
   int p=ceil(digit[n]/log10(base));
   if(n==0||n==1)printf("Case %d: 1\n",t++);
   else printf("Case %d: %d\n",t++,p);

    }
    return 0;
}

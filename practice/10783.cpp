#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sum,tc,t;
    cin>>tc;
    t=1;
    while(tc){
    cin>>a>>b;
    sum=0;
    for(int i=a;i<=b;i++)
    {
        if(i%2!=0)
        sum+=i;
    }
    if(sum==0)
    {
        if(a%2==0)
        sum+=a+1;
        else
        sum=a;
    }
    printf("Case %d: %d\n",t,sum);
    tc--;
    t++;
        }

    return 0;
}

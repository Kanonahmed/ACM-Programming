#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,tc,t;
    long long sum;
cin>>tc;
t=1;
while(tc){
    cin>>a>>b>>c;
    if(a>b&&a>c&&b+c>a)
    {
        sum=b*b+c*c;
        if(sum==a*a)
        printf("Case %d: yes\n",t);
        else
        printf("Case %d: no\n",t);
    }
    else if(b>c&&b>a&&a+c>b)
    {
         sum=a*a+c*c;
        if(sum==b*b)
        printf("Case %d: yes\n",t);
        else
        printf("Case %d: no\n",t);
    }
    else if(c>a&&c>b&&a+b>c)
    {
         sum=b*b+a*a;
        if(sum==c*c)
        printf("Case %d: yes\n",t);
        else
        printf("Case %d: no\n",t);
    }
    else
    printf("Case %d: no\n",t);
    t++;
    tc--;
}

    return 0;
}

#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL go(LL n)
{
    LL sum=0;
    for(LL i=1;i<=sqrt(n);i++)
    {
        LL fs=(n/i)*i;
        LL ss=(n/(i+1));
        LL ss1=n/i;
        LL sum1=ss1*(ss1+1)/2;
        LL sum2=ss*(ss+1)/2;
        if(ss1!=i)
        fs+=(sum1-sum2)*i;
        sum+=fs;
    }
    return sum;
}
int main()
{
    LL n;
    while(cin>>n&&n){
    LL t=go(n);
    cout<<t-1<<endl;
    }

    return 0;
}

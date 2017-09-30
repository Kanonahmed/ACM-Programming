#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    long long a,b,dif;
    while(scanf("%lld%lld",&a,&b)==2)
    {
        if(a<b)
        {
            dif=b-a;
        }
        else dif=a-b;
        printf("%lld\n",dif);
    }


    return 0;
}

#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<map>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int tc,t=1,n,sum;
    cin>>tc;
    while(tc){
        cin>>n;
        if(n%2==0)
        sum=n/2;
        else if(n%2!=0)
        sum=(n/2)+1;
        printf("Case %d: %d\n",t,sum);
        t++;
        tc--;
    }

    return 0;
}

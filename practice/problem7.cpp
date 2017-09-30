#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int num,s,p,n;
    //float s,p;
    cin>>n;
    while(n!=0)
    {
        cin>>num;
        s=sqrt(num);
        p=s*s;
        if(p==num)
            printf("YES\n");
        else printf("NO\n");
        n--;
    }
    return 0;
}

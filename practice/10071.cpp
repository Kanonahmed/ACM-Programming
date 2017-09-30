#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    int v,t,s;
    while(scanf("%d%d",&v,&t)==2)
    {
        s=2*v*t;
        printf("%d\n",s);
    }
    return 0;
}

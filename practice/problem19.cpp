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
    int line,n,i,j,k,h;
    cin>>line;
    while(line!=0)
    {
        cin>>n;
        h=0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n-i;j++)
            printf(" ");
            for(k=1;k<=i+h;k++)
            printf("*");
            printf("\n");
            h++;
        }


        line--;
    }

    return 0;
}

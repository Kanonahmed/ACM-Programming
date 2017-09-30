#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    char number[1000];
    int i,j,l,sum,coming;
    gets(number);
    l=strlen(number);
    sum=0;
    for(i=l-1,j=0;i>=0;i--,j++)
    {
        sum+=(number[i]-'0')*pow(2,j);
    }
    cout<<sum;
    return 0;
}

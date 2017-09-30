#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int fact(int);
int main()
{
    int number,sum;
    cin>>number;
    cout<<fact(number);

    return 0;
}
int fact(int x)
{
    if(x==0)
    return 1;
    else
    return (x*fact(x-1));
}

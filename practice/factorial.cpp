#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int number,i,sum=1;
    cin>>number;
    for(i=1;i<=number;i++)
    {
        sum*=i;
    }
    cout<<sum;

    return 0;
}

#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int line,arr[1000],i,j,sum;
    float avg;
    cin>>line;
    while(line!=0)
    {

        for(i=0;i<5;i++)
           cin>>arr[i];
           sum=0;
           for(i=0;i<5;i++)
           sum+=arr[i];
           avg=(float)sum/5;
           cout<<avg<<endl;

        line--;
    }

    return 0;
}

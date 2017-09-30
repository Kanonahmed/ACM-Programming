#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int line,st,i,j,sum,arr[1000];
    float avg;
    cin>>line;
    while(line!=0)
    {
        cin>>st;
        for(i=0;i<st;i++)
           cin>>arr[i];
           sum=0;
           for(i=0;i<st;i++)
           sum+=arr[i];
           avg=(float)sum/st;
        printf("%0.2f\n",avg);

        line--;
    }

    return 0;
}

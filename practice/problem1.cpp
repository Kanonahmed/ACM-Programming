#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int num,arr[1000],pos=0,neg=0,i;
    cin>>num;
    for(i=0;i<num;i++)
    cin>>arr[i];
    for(i=0;i<num;i++)
    {
        if(arr[i]>0)
        pos++;
        else if(arr[i]<0)
        neg++;
    }
    cout<<pos<<" "<<neg;

    return 0;
}

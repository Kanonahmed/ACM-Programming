#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int number,arr[100],i,j;
    cin>>number;
    i=0;
    while(number!=0)
    {
       arr[i]=number%2;
       number=number/2;
       i++;
    }
    for(j=i-1;j>=0;j--)
    cout<<arr[j];

    return 0;
}

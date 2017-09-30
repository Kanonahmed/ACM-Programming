#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int a[50][50],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
         cin>>a[i][j];
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
            }
    cout<<endl;}
    return 0;
}

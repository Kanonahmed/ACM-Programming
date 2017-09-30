#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#define n 2
using namespace std;
int main()
{
    int arr[n][n],brr[n][n],i,j;
    cout<<"set first matrix......"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        cin>>arr[i][j];
    }
    cout<<"set second matrix....."<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        cin>>brr[i][j];
    }
     cout<<"your matrix......first"<<endl;

     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {cout<<arr[i][j]<<" ";}cout<<"\n";
    }
    cout<<"your matrix......second"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {cout<<brr[i][j]<<" ";}cout<<"\n";
    }

    cout<<"row convert into coloum"<<endl;
  for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {cout<<arr[j][i]<<" ";}cout<<"\n";
    }
    cout<<" and .........."<<endl;
        for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {cout<<brr[j][i]<<" ";}cout<<"\n";
    }

    return 0;
}

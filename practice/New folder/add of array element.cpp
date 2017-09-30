#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int arr[100],i,j,k,sum=0,n;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>arr[i];
    for(i=0;i<n;i++)
    {cout<<arr[i]<<" ";}
    cout<<endl;

    //adding element of array
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    cout<<" the sum= "<<sum;

    return 0;
}

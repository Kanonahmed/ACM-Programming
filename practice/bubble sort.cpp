#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int arr[100],n,i,j,temp,c=0;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>arr[i];
    cout<<"before sorting"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;

    /////////////
    ////////////
    cout<<"after sorting"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                c++;
            }
        }
    }
     for(i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
     }
    cout<<endl;
    cout<<"number of sorting="<<c<<endl;
    return 0;
}

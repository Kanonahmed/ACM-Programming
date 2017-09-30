#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
/*int main()
{
    int len,arr[100],number,i,flag=0;
    int low=0,mid,high;
    cin>>len;
    high=len-1;
    for(i=0;i<len;i++)
    {cin>>arr[i];}
    for(i=0;i<len;i++)
    {cout<<arr[i]<<" ";}
    cin>>number;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(number==arr[mid])
        {
            flag=1;
            break;
        }
        if(number<arr[mid])
        {
            high=mid-1;
        }
        if  (number>arr[mid])
        {
            low=mid+1;
        }
    }
    if(flag==0)          //if(low>high)
    {
       cout<<"number is not found";
    }
    else
    printf("number is founded in %d",mid);

    return 0;
}*/

int search(int arr[],int len,int n)
{

    int low=0,mid,high;
    int flag=0;
    high=len-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(n==arr[mid])
        {   flag= 1;
            break;
        }

        if(n>arr[mid])
        {
            low=mid+1;
        }
        if(n<arr[mid])
        {
            high=mid-1;
        }

    }
    //return flag;
    if(flag==1)
    cout<<"number is found in "<<mid+1<<" position";
    else
    cout<<"Number is not found";
}
int main()
{
    int a[100],le,num,i,t;
    cin>>le;
    for( i=0; i<le; i++)
        cin>>a[i];
        sort(a+0,a+le);
        cout<<"after sorting....."<<endl;
        for( i=0; i<le; i++)
        cout<<a[i]<<" ";
        cout<<"\n";
    cin>>num;
    search(a,le,num);
   /* if(t==1)
        cout<<"number is found";
    else
        cout<<"not found";*/

    return 0;
}

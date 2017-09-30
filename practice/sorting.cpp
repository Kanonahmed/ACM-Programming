#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    //int a[]={5,6,7,8,1,4};
    int i,j,temp,a[100];
    for(i=0;i<6;i++)
    cin>>a[i];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
               /// swap(a[j],a[j+1]);
            }
        }

    }
                       ///sort(a+0,a+6);
    cout<<"after sorting...."<<endl;
      for(i=0;i<6;i++)
    cout<<a[i]<<" ";



    return 0;
}

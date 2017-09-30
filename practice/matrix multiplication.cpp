#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#define n 100
using namespace std;
int main()
{
    int arr[n][n],brr[n][n],crr[n][n],q,i,j;
    int row1,com1,row2,com2;
    cin>>row1>>com1;
    cout<<"set first matrix......"<<endl;
    for(i=0; i<row1; i++)
    {
        for(j=0; j<com1; j++)
            cin>>arr[i][j];
    }
    cout<<"\nthen\n";
    cin>>row2>>com2;
    cout<<"set second matrix....."<<endl;
    for(i=0; i<row2; i++)
    {
        for(j=0; j<com2; j++)
            cin>>brr[i][j];
    }

    if(com1==row2)
    {

        for(i=0;i<row1;i++)
        {
            for(j=0;j<com2;j++)
            {
                crr[i][j]=0;
                for(q=0;q<com1;q++)
                crr[i][j]+=arr[i][q]*brr[q][j];

            }
        }
    }
    for(i=0;i<row1;i++)
        {
            for(j=0;j<com2;j++)

              {
                  cout<<crr[i][j]<<" ";
              }
              cout<<"\n";
        }

    return 0;
}

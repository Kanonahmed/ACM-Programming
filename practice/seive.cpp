#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#define n 100000000
using namespace std;
int arr[n];
void prime()
{
    int j,i,r;
    for(i=2; i<=n; i++)
    {
        arr[i]=1;
    }
    r=sqrt(n);
    for(i=2; i<=r; i++)
    {
        if(arr[i]==1)
        {
            for(j=2*i; j<=n; j=j+i)
            {
                arr[j]=0;
            }
        }
    }
    /* for(i=2; i<=n; i++)
     {
         if(arr[i]==1)
         {
             printf("%d ",i);
         }
     }*/


}

int main()
{

    prime();
    int number,i,count=0;
    scanf("%d",&number);
    for(i=2; i<=number; i++)
    {
        if(arr[i]==1)
        {
            count++;
           // printf("%d ",i);
        }
    }
    printf("\n\nTotal prime number is %d\n",count);
    return 0;
}

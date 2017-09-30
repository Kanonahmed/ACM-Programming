#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a=0,b=0,c=0;
    int arr[1520];
    int x,y,z,m;
    int n;
    arr[0]=1;
    n=0;
    while(n<1510)
    {
       x=arr[a]*2;
       y=arr[b]*3;
       z=arr[c]*5;
       m=min(min(x,y),z);
        if(m==x)
        a++;
        if(m==y)
        b++;
        if(m==z)
        c++;
        n++;
        arr[n]=m;
    }
    printf("The 1500'th ugly number is %d.\n",arr[1499]);

    return 0;
}

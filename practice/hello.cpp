#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int i,j,n;
    float a,b;
    double h;
    cout<<"give the value of n,a,h"<<endl;
    scanf("%d %f %lf",&n,&a,&h);
    printf("n=%d a=%.2f h=%lf\n",n,a,h);
    for(b=0; b<2; b++)
    {
        cin>>i>>j;
        printf("%6d\t%4d\n",i,j);
    }
    return 0;
}

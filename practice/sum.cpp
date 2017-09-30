#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    /*int a,b,sum;
    int c,d,e;

    a=50;
    //a=50.45;
    b=60;
    scanf("%d",&c);
    scanf("%d",&d);
    e=c/d;
    sum=a+b;
    printf("%d + %d = %d\n",a,b,sum);
    printf("%d + %d = %d\n",b,a,sum);
    printf("%d / %d = %d",c,d,e);*/
    int a,b,c;
    char sign;
    sign='*';
    scanf("%d%d",&a,&b);
    c=a*b;
    printf("%d %c %d=%d",a,sign,b,c);


    return 0;
}

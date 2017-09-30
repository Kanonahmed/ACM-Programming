#include<bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;
int main()
{
    double a,b,c;
    double s,r1,r2,a5,a1,a2,a3;
    while(cin>>a>>b>>c)
    {
        s=(a+b+c)/2.0;
        a5=sqrt(s*(s-a)*(s-b)*(s-c));
        r1=(a*b*c)/sqrt((a+b+c)*(a+b-c)*(a+c-b)*(c+b-a));
        a1=pi*(r1*r1);
        a1=a1-a5;
        printf("%.4f ",a1);
        r2=a5/s;
        a3=pi*(r2*r2);
        a2=a5-a3;
        printf("%.4f ",a2);
        printf("%.4f\n",a3);
    }
    return 0;
}

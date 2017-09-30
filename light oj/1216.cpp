#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
#define eps 1e-9
int main()
{
    double r1,r2,h,p,area,rr;
    int tc,ks;
    cin>>tc;
    ks=1;
    while(tc){
    cin>>r1>>r2>>h>>p;
    //area1=((r1*r1)+(r2*r2)+(r1*r2))*(pi*h)/3;
    rr=r2+((r1-r2)*p)/h;
    area=((rr*rr)+(r2*r2)+(rr*r2))*(pi*p)/3;
    printf("Case %d: %0.10lf\n",ks,area+eps);
    ks++;
    tc--;
    }

    return 0;
}

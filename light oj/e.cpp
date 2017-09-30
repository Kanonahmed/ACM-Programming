#include<bits/stdc++.h>
#include<cmath>
using namespace std;
const double PI= 2*acos(0.0);
int main()
{
    double v,a,h,r,g,a1;
    int tc,t;
    cin>>tc;
    t=1;
    while(tc--){
        cin>>v>>a;
        g=9.81;
        a1=a*PI/180;
        h=((v*v)*((sin(a1))*(sin(a1)))/(2.0*g));
        r=(((v*v)*(sin(2.0*a1)))/g);
        printf("Case %d: %0.02lf %0.02lf\n",t,h,r);
        t++;
    }
    return 0;
}

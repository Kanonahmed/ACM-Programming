#include<bits/stdc++.h>
using namespace std;
#define pi 3.1416
int main()
{
    double a,b,c,ax,bx,cx,s,sum;
    double r1,r2,r3,area,area2,result;
    int tc,t;
    cin>>tc;
    t=1;
    while(tc)
    {
        cin>>r1>>r2>>r3;
        ax=r1+r2;
        bx=r2+r3;
        cx=r3+r1;
        s=(ax+bx+cx)/2;
        sum=s*(s-ax)*(s-bx)*(s-cx);
        area=sqrt(sum);
//
//    a=(acos((ax*ax+cx*cx-bx*bx)/(2*ax*cx)))*57.2958;
//    b=(acos((ax*ax+bx*bx-cx*cx)/(2*ax*bx)))*57.2958;
//    c=(acos((cx*cx+bx*bx-ax*ax)/(2*cx*bx)))*57.2958;
//
//    area2=pi*(r1*r1)*(a/360)+pi*(r2*r2)*(b/360)+pi*(r3*r3)*(c/360);
//

        a=(acos((ax*ax+cx*cx-bx*bx)/(2*ax*cx)));
        b=(acos((ax*ax+bx*bx-cx*cx)/(2*ax*bx)));
        c=(acos((cx*cx+bx*bx-ax*ax)/(2*cx*bx)));
        area2=(r1*r1)*(a/2)+(r2*r2)*(b/2)+(r3*r3)*(c/2);

        result=area-area2;
        printf("Case %d: %.09lf\n",t,result);
        tc--;
        t++;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define eps 1e-9
int main()
{
    double cx,cy,ax,ay,bx,by,r1,r2,a,l;
    int tc,t;
    cin>>tc;
    t=1;
    while(tc){
    cin>>cx>>cy>>ax>>ay>>bx>>by;
    r1=sqrt((cx-ax)*(cx-ax)+(cy-ay)*(cy-ay));
    r2=sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
    a=acos(((r1*r1)+(r1*r1)-(r2*r2))/(2*r1*r1));
    l=r1*a;
    printf("Case %d: %.10lf\n",t,l+eps);
tc--;
t++;
    }
    return 0;
}

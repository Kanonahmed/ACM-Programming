#include<bits/stdc++.h>
#define pi 2*acos(0.0)
#define eps 1e-9
using namespace std;
int main()
{
    int tc,t;
    cin>>tc;
    t=1;
    while(tc--)
    {
        double R,r,x;
        int n;
        cin>>R>>n;
        x=sin(pi/n);
        r=R*x/(1.0+x);
        printf("Case %d: %0.10Lf\n",t,r+eps);
        t++;
    }
    return 0;
}

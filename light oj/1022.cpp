#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
#define eps 1e-9
int main()
{
    double r,area,area1,result;
    int tc,t=1;
    cin>>tc;
    while(tc){
    cin>>r;
    area=(2*r)*(2*r);
    area1=pi*(r*r);
    result=area-area1;
    //cout<<"case "<<t<<":"<<" "<<result<<endl;
printf("Case %d: %.02lf\n",t,result+eps);
    tc--;
    t++;
    }

    return 0;
}

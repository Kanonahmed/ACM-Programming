#include<bits/stdc++.h>
using namespace std;
int main()
{
    double r,x,y,xx,yy;
    cin>>r>>x>>y>>xx>>yy;
    double sum=(xx-x)*(xx-x)+(yy-y)*(yy-y);
    sum=sqrt(sum);
    double n=sum/(2.0*r);
    n=ceil(n);
    cout<<n<<endl;


    return 0;
}

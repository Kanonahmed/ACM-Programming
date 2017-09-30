#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,res;
    cin>>a>>b>>c>>d;
    res=(b-a)/(c+d);
    if(res<0.000)res=0;
    printf("%0.6f\n",res);
    return 0;
}

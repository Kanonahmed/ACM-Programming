#include<bits/stdc++.h>
#define xx first
#define yy second
using namespace std;
int main()
{
    int n;
    pair<double,double>p[10];
    while(cin>>n&&n)
    {
        for(int i=0;i<n*2;i++)
        {
            int x,y;
            string s;
            cin>>s;
            cin>>x>>y;
            p[i].xx=x;
            p[i].yy=y;
        }
        sort(p,p+(n*2));
        for(int i=0;i<2*n;i++)cout<<p[i].xx<<" "<<p[i].yy<<endl;
        double sum=0.0;
        for(int i=0;i<2*n-1;i++)
        {
            double fd=p[i].xx-p[i+1].xx;
            double sd=p[i].yy-p[i+1].yy;
            double d=sqrt(fd*fd+sd*sd);
            sum+=d;
        }
        cout<<sum<<endl;
    }


    return 0;
}

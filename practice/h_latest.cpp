#include<bits/stdc++.h>
#define PI acos(-1.0)
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,f;
        cin>>n>>f;
        double v[100005];
        for(int i=0;i<n;i++)
        {
            double x;
            cin>>x;
            v[i]=(x*x)*PI;
        }
        double lo=0.0,hi=90000000000.0;
        double res=0.0;
        while(hi-lo>=0.000001)
        {
             double mid=(lo+hi)/2.0;
             int cnt=0;
             for(int i=0;i<n;i++)
                cnt+=floor(v[i]/mid);
            if(cnt>=(f+1)){lo=mid;res=max(res,mid);}
            else hi=mid;
        }
        printf("%.8lf\n",res);
    }



    return 0;
}

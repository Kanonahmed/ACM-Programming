#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b;
        cin>>a>>b;
        int mx=max(a,b);
        int mn=min(a,b);
        double  p=sqrt(3)/4;
        p=p*mx;
        double s=p*(mx+max(mx,2*mn));
        printf("%.3lf\n",s);
    }

    return 0;
}

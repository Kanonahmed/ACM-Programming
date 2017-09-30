#include<bits/stdc++.h>
using namespace std;
int main()
{

    int tc,a,b,c,t;
    cin>>tc;
    t=1;
    while(tc)
    {
        cin>>a>>b>>c;
        if(a<=b&&a>=c||a<=c&&a>=b)
            printf("Case %d: %d\n",t,a);
        else if(b>=c&&b<=a||b<=c&&b>=a)
            printf("Case %d: %d\n",t,b);
        else if(c>=a&&c<=b||c<=a&&c>=b)
            printf("Case %d: %d\n",t,c);

        t++;
        tc--;
    }

    return 0;
}

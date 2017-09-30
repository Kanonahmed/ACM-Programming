#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,t,a,b,sum;
    cin>>tc;
    t=1;
    while(tc--)
    {
        cin>>a>>b;
        if(a<b)
        {
            sum=b*4+19;
            printf("Case %d: %d\n",t,sum);
        }
        else
        {
            sum=((a-b)+a)*4+19;
            printf("Case %d: %d\n",t,sum);

        }
        t++;
    }


    return 0;
}

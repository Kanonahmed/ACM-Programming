#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,ks=1;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int an=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            an=max(an,abs(x));
        }
        printf("Case %d: %d\n",ks++,an);
    }


    return 0;
}

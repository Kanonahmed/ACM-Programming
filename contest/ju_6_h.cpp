#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1009];
    while(scanf("%d",&n)==1)
    {
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a+1,a+(n+1));
        int inf=10000000;
        for(int i=1; i<=n; i+=2)
        {
            int sum=abs(a[i]-a[i+1]);
            int nxt=abs(24-sum);
            int mn=min(nxt,sum);
            if(inf>mn)
            {
                inf=mn;
            }
        }
        printf("%d\n",inf);
    }
    return 0;
}

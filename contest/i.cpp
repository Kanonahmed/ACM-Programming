#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,r;
    int a[105],b[105];
    while(cin>>n>>d>>r)
    {
        if(n==0&&d==0&&r==0)break;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
           cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        long long res=0;
        for(int i=0;i<n;i++)
        {
            int sum=a[i]+b[n-i-1];
            if(sum>d)
            {
                res+=(sum-d)*r;
            }
        }
        cout<<res<<endl;
    }

    return 0;
}

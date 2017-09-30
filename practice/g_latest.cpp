#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a[1005],b[1005];
        int n,m;
        cin>>n;
        for(int i=0;i<n;i++)cin>>a[i];
        cin>>m;
        for(int i=0;i<m;i++)cin>>b[i];
        //sort(a,a+n);
        //sort(b,b+m);
        int res=100000000;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            res=min(res,abs(a[i]-b[j]));

        cout<<res<<endl;
    }



    return 0;
}

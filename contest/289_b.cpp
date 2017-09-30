#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k,a[105],mn=500,mx=-100;
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        mn=min(mn,a[i]);
        mx=max(mx,a[i]);

    }
    if((mx-mn)>k)
    {
        cout<<"NO"<<endl;
        return 0;
    }

    cout<<"YES"<<endl;
    for(int i=0; i<n; i++)
    {
        int f=1;
        for(int j=0; j<a[i]; j++)
        {
            cout<<f<<" ";
            f=f%k;
            f++;
        }

        cout<<endl;
    }

    return 0;
}

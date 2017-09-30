#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100005];
    cin>>n;
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n; i++)
    {
        int mx,mn;
        if(i==0)
        {
            mn=abs(a[i+1]-a[i]);
            mx=abs(a[n-1]-a[i]);
        }
        else if(i==(n-1))
        {
            mn=abs(a[n-1]-a[n-2]);
            mx=abs(a[0]-a[n-1]);
        }
        else
        {
            mn=min(abs(a[i+1]-a[i]),abs(a[i]-a[i-1]));
            mx=max(abs(a[i]-a[n-1]),abs(a[i]-a[0]));
        }
        cout<<mn<<" "<<mx<<endl;
    }


    return 0;
}

#include<bits/stdc++.h>
#define inf 100000000;
#define pb  push_back
using namespace std;
int I[10000];
int L[10000];
int a[10000];
int n;
int LIS()
{
    I[0]=-inf;
    for(int i=1; i<=n; i++)I[i]=inf;
    int len=0;
    for(int i=0; i<n; i++)
    {
        int low=0;
        int heigh=n;
        int mid;
        while(low<=heigh)
        {
            mid=(low+heigh)/2;
            if(a[i]>I[mid])
                low=mid+1;
            else heigh=mid-1;

        }
        I[low]=a[i];
        L[i]=low;
        if(len<low)len=low;
    }
    return len;
}
int main()
{
    cin>>n;
    for(int i=0; i<n; i++)cin>>a[i];
    int ll=LIS();
    cout<<"Length : "<<ll<<endl;
    vector<int>v;
    for(int i=n-1;i>=0;i--)
    {
        if(ll==L[i])
        {
            v.pb(a[i]);
            ll--;
        }
    }
   reverse(v.begin(),v.end());
   for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    return 0;
}

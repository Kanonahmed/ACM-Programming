#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a[55];
    cin>>n>>k;
    for(int i=0; i<n; i++)a[i]=i+1;
    int mx=0;
    for(int i=0; i<n; i++)
    {
        mx+=(n-i)*a[i];
    }
    int t=0;
    do
    {
        int sum=0;
        for(int i=0; i<n; i++)
        {
            int mn=a[i];
            for(int j=i; j<n; j++)
            {
                mn=min(mn,a[j]);
                sum+=mn;
            }
        }
        if(mx==sum)t++;
        if(t==k)break;
    }
    while(next_permutation(a,a+n));
    for(int i=0; i<n; i++)cout<<a[i]<<" ";

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1005];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int best=a[0];
    int k=0;
    for(int i=1; i<n; i++)
    {
        if(best<a[i])
        {
            k++;
            best=a[i];
        }
    }
    int lowest=a[0];
    for(int i=1; i<n; i++)
    {
        if(lowest>a[i])
        {
            k++;
            lowest=a[i];
        }
    }
    cout<<k<<endl;
    return 0;
}

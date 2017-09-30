#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[4*100000];
    cin>>n;
    for(int i=0; i<2*n; i++)
        cin>>a[i];
    for(int j=0; j<2*n; j+=2)
    {
        if(a[j]>a[j+1])
            cout<<a[j]<<" ";
        else cout<<a[j+1]<<" ";
    }

    cout<<endl;
    return 0;
}

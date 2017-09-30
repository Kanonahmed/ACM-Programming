#include<bits/stdc++.h>
using namespace std;
int a[1005];
int main()
{
    int n;
    cin>>n;
    int p=0;
    for(int i=0; i<n; i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int c=0;
        if(x)c++;
        if(y)c++;
        if(z)c++;
        if(c>=2)p++;
    }
    cout<<p<<endl;
    return 0;
}

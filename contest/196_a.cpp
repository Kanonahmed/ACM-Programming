#include<bits/stdc++.h>
#define inf 1000000000
using namespace std;
int main()
{
int n,m,a[55];
cin>>n>>m;
for(int i=0;i<m;i++)cin>>a[i];
sort(a,a+m);
int first=inf;
for(int i=0;i<=m-n;i++)
{
    int best=min(first,(a[i+n-1]-a[i]));
    if(best<first)
    {
        first=best;
    }
}
cout<<first<<endl;

    return 0;
}

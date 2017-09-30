#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL a[100005],b[100005],m,n;
bool ok(LL x)
{
    LL ache=m;
    for(int i=1;i<=n;i++)
    {
        LL cur=b[i]/a[i];
        LL rm=b[i]%a[i];
        if(cur<x)
        {
            LL nd=(x-cur)*a[i]-rm;
            if(nd>ache)return 0;
            else ache-=nd;
        }
    }
    return 1;
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
    for(int i=1;i<=n;i++)scanf("%lld",&b[i]);
    LL lo=0,hg=2000000000,m;
    LL best=-1;
    while(lo<=hg)
    {
        m=(lo+hg)/2;
        if(ok(m)){lo=m+1;best=max(best,m);}
        else
            hg=m-1;
    }

  cout<<best<<endl;

    return 0;
}

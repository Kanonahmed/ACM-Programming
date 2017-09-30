#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
int mn,mx;
cin>>n>>m;
mn=min(n,m);
mx=max(n,m);
int i=0;
while(mn&&mx>=2)
{
    mn--;
    mx=mx-2;
    i++;
}
int mnn,mxx;
mnn=min(mn,mx);
mxx=max(mn,mx);
while(mnn&&mxx>=2)
{
    mnn--;
    mxx=mx-2;
    i++;
}
cout<<i<<endl;

    return 0;
}

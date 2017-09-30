#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL go(LL n,LL d)
{
    LL c=0;
  while(n){c+=n/d;n/=d;}
  return c;
}
int main()
{
    int tc,t=1;
    cin>>tc;
    while(tc--)
    {
        LL n,r,p,q;
        cin>>n>>r>>p>>q;
        LL tw=go(n,2)-go(r,2)-go(n-r,2);
        LL fv=go(n,5)-go(r,5)-go(n-r,5);
        LL  pt=0,pf=0;
        while(p%2==0){pt++;p/=2;}
        while(p%5==0){pf++;p/=5;}
        int ans=min(tw+pt*q,fv+pf*q);
        cout<<"Case "<<t++<<": "<<ans<<endl;
    }
    return 0;
}

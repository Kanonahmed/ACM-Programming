#include<bits/stdc++.h>
using namespace std;
int a[100005];
int h[100005];
int main()
{
    int n,m;
    cin>>n>>m;
    int mx=-1;
    for(int i=0; i<m; i++)
    {
        cin>>a[i]>>h[i];
        mx=max(mx,h[i]);
    }
    for(int i=0; i<m-1; i++)
    {
        if(a[i+1]-a[i]<abs(h[i]-h[i+1]))
        {
            cout<<"IMPOSSIBLE"<<endl;
            return 0;
        }
        else
        {
            if(h[i+1]>h[i])
            {
                mx=max(mx,h[i+1]+(a[i+1]-a[i]-(h[i+1]-h[i]))/2);
            }
            else
            {
                mx=max(mx,h[i]+(a[i+1]-a[i]-(h[i]-h[i+1]))/2);
            }
        }

    }
    if(a[0]-1>0)
        mx=max(mx,h[0]+a[0]-1);
    if(n-a[m-1]>0)
        mx=max(mx,n-a[m-1]+h[m-1]);
    cout<<mx<<endl;
    return 0;
}

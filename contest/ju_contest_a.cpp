#include<bits/stdc++.h>
using namespace std;
int vis[100005];
int main()
{
    int n,d,a[100005];
    cin>>n>>d;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    if(n<3)
    {
        cout<<"0"<<endl;
        return 0;
    }
    long long cnt=0;
    for(int i=1; i<=n; i++)
    {
        long long low=i;
        long long heigh=n;
        long long mid;
        long long  mx=-1;
        while(low<=heigh)
        {
            mid=(low+heigh)/2;
            if((a[mid]-a[i])<=d)
            {
                low=mid+1;
                mx=max(mx,mid);
            }
            else
            {
                heigh=mid-1;
            }
        }
        if(mx==-1)continue;
        if((mx-i)>=2)
        {
            mx=mx-i;
            long long triple=(mx*(mx-1))/2;
            cnt+=triple;
        }
    }
    cout<<cnt<<endl;

    return 0;
}

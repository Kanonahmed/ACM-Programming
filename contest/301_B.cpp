#include<bits/stdc++.h>
using namespace std;
int a[10000];
int main()
{
    int n,k,pxam,xdis,ymin;
    cin>>n>>k>>pxam>>xdis>>ymin;
    int sum=0;
    int pre=0;
    for(int i=1; i<=k; i++)
    {
        cin>>a[i];
        sum+=a[i];
        if(a[i]<ymin)pre++;
    }
    if(pre>n/2)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    int tmp=k;
    vector<int>v;
    for(int i=pre+1; i<=n/2; i++)
    {
        if(tmp==n)break;
        sum++;
        v.push_back(1);
        ++tmp;
    }
    for(int i=tmp+1; i<=n; i++ )
    {
        sum+=ymin;
        v.push_back(ymin);
    }
    if(sum>xdis)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    for(int i=0; i<v.size(); i++)cout<<v[i]<<" ";
    return 0;
}

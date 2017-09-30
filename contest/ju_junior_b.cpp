#include<bits/stdc++.h>
using namespace std;
int vis[10];
int main()
{
    int n,a[100005];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    reverse(a,a+n);
    int sum=4;
    int cnt=1;
    for(int i=0; i<n; i++)
    {
        if(sum>=a[i])
        {
            sum-=a[i];
        }
        else if(vis[a[i]]!=0)
            vis[a[i]]--;
        else
        {
            vis[sum]++;
            cnt++;
            sum=4;
            sum-=a[i];
        }
    }
    cout<<cnt<<endl;

    return 0;
}

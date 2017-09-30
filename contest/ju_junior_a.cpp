#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a[55];
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    int cnt=0;
    for(int i=1; i<=n; i++)
    {
        if(a[k]>0)
        {
            if(a[i]>=a[k])
                cnt++;
        }
        else
        {
            if(a[i]>a[k])
                cnt++;
        }
    }
  cout<<cnt<<endl;
    return 0;
}

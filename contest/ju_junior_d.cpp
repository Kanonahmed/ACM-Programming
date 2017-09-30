#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[102];
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    reverse(a,a+n);
    int ss=0;
    for(int i=0;i<n;i++)
    {   ss+=a[i];
        int sum=0;
        for(int j=i+1;j<n;j++)
        sum+=a[j];
        if(ss>sum)
        {
            cout<<i+1<<endl;
            break;
        }
    }



    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int n,a[20];
int main()
{

    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<(1<<n);i++)
    {
        cout<<"mask["<<i<<"] = ";
        for(int j=0;j<n;j++)if(i&(1<<j))cout<<a[j]<<" ";
        cout<<"then"<<endl;
        for(int j=i;j>0;j=(i&(j-1)))
        {
            for(int k=0;k<n;k++)
            if(j&(1<<k))cout<<a[k]<<" ";
            cout<<endl;
        }

    }


    return 0;
}

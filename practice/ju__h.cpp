#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[105];
    cin>>n;
    int heigh=-1,low=1000000;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(heigh<a[i])heigh=a[i];
        if(low>a[i])low=a[i];
    }
    int cnt;
    int b[105],k=1,flag=0;
    for(int i=1; i<=n; i++)
    {
        if(a[i]==heigh&&flag==0)
        {
            cnt=i;
            flag=1;
        }
        else b[k++]=a[i];
    }
    int cnt1;
    for(int i=1; i<k; i++)
    {
        if(low==b[i])
        {
            cnt1=i;
        }
    }
    int s=cnt-1;
    int s1=((k-1)-cnt1);
    cout<<(s+s1)<<endl;
    return 0;
}

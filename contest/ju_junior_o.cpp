#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,a[505];
    cin>>n>>x;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    int flag=0;
    for(int i=1; i<=n; i++)
    {
        if(a[i]==x)
            flag=1;
    }
    if(flag==0)
    {
        n++;
        a[n]=x;
    }
    sort(a+1,a+(n+1));
    int mid,heigh=n;
    mid=(n+1)/2;
    int i=0;
    while(x!=a[mid])
    {
        mid=(heigh+1)/2;
        if(a[mid]==x)
        {
            break;
        }
        else if(a[mid]>x)
            heigh--;
        else
            heigh++;
            i++;

    }
    if(flag==0)i++;
    cout<<i<<endl;
    return 0;
}

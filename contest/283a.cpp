#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[105],k,p;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int sum;
    int ms=2000;
    for(int k=1; k<=n-2; k++)
    {
        int i=0;
        p=0;
        while(i<n-1)
        {
            if(i+1==k)
            {
                sum=a[i+2]-a[i];
                i=k+1;
            }
            else
            {
                sum=a[i+1]-a[i];
                i++;
            }
            if(p<sum)
                p=sum;
        }
        if(p<ms)
            ms=p;
    }
    cout<<ms<<endl;
    return 0;
}

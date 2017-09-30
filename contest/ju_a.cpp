#include<iostream>
#include<cmath>
using namespace std;
int ar[100009];
int main()
{
    int n,m,mx,top;

    cin>>n>>m;
    long long sum=0;
    for(int i=1; i<=n; i++)
    {
        cin>>ar[i];
        sum+=ar[i];
        if(mx<ar[i])
            mx=ar[i];
    }
    long long low=mx;
    long long heigh=sum,mid,best,spend;
    while(low<=heigh)
    {
        mid=(low+heigh)/2;
        spend=mid;
        top=1;
        for(int i=1; i<=n; i++)
        {
            if(ar[i]>spend)
            {
                top++;
                spend=mid-ar[i];
            }
            else
                spend-=ar[i];
        }
        if(top<=m)
        {
            best=mid;
            heigh=mid-1;
        }
        else
            low=mid+1;
    }

    cout<<best<<endl;

    return 0;
}

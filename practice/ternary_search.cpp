#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1000];
    cin>>n;
    for(int i=1; i<=n; i++)cin>>a[i];
    int low=1;
    int high=n;
     int k=100;
     int mx=-1;
    while(k--)
    {
        int m1=low+(high-low)/3;
        int m2=high-(high-low)/3;
        if(a[m1]<a[m2])
            low=m1;
        else
            high=m2;
            mx=max(mx,max(a[m1],a[m2]));
    }
   mx=max(mx,a[(low+high)/2]);
    cout<<mx<<endl;

}

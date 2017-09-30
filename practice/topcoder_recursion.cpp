#include<bits/stdc++.h>
using namespace std;
int a[100],n,c;
int main()
{
    cin>>n>>c;
    for(int i=0;i<n;i++)cin>>a[i];
    int k=0;
    //while(a[k]!='\0')k++;
    //cout<<k<<endl;
    for(int j=0;j<c;j++)
    {
        n--;
        for(int i=0;i<n;i++)a[i]=a[i+1]-a[i];
    }
    for(int i=0;i<n;i++)cout<<a[i]<<" ";

    return 0;
}

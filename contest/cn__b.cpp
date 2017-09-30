#include<bits/stdc++.h>
using namespace std;
int a[100][100],p[100];
int main()
{
    int n;
    cin>>n;
    int ch=0;
    for(int i=0;i<n;i++)
    {
        int mx=0;
        for(int j=0;j<n;j++){cin>>a[i][j];mx=max(mx,a[i][j]);}
        if(ch==0&&mx==n-1){ch=1;mx++;}
        p[i]=mx;
    }
    for(int i=0;i<n;i++)cout<<p[i]<<" ";

    return 0;
}

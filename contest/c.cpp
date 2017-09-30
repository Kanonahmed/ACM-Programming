#include<bits/stdc++.h>
using namespace std;
int main()
{

    int m,t,n;
    int a[3000];
    cin>>m>>t>>n;
    for(int i=0;i<m;i++)
    cin>>a[i];
    sort(a,a+m);
    int xm=a[m-1];
    int i=0;
    int sum=t+1;
    while(xm>=sum)
    {
        sum+=t;
        i++;
    }
    cout<<i<<endl;



    return 0;
}

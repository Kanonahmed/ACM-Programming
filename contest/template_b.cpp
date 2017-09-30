#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,a[1005];
    cin>>n>>l;
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    float d=max(a[0],l-a[n-1]);
    for(int j=0;j<n-1;j++)
    {
        float temp=(float)(a[j+1]-a[j])/2;
        if(temp>d)d=temp;
    }
    printf("%.10f\n",d);


    return 0;
}

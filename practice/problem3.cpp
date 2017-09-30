#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int l,w,h,v,n,i;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>l>>w>>h;
        v=l*w*h;
        cout<<v<<endl;
    }

    return 0;
}

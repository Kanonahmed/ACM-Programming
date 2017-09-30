#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000],n;
    //vector<int >a;
    //int n;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
    a.erase(a,1);
    n--;
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";


    return 0;
}

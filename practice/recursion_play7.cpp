#include<bits/stdc++.h>
using namespace std;
int a[20];
int binary_search(int low,int heigh,int v)
{
    if(low>heigh)return -1;
    int mid=(low+heigh)/2;
    if(a[mid]==v)return mid;
    if(a[mid]<v)return binary_search(mid+1,heigh,v);
    if(a[mid]>v)return binary_search(low,mid-1,v);

}
int main()
{
    int n,l;
    cin>>n>>l;
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    int t=binary_search(0,n-1,l);
    if(t<0)cout<<"not found"<<endl;
    else cout<<binary_search(0,n-1,l)+1;


    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    /// using array binary search
    int a[10],*p,n;
    for(int i=0;i<5;i++)
    cin>>a[i];
    sort(a,a+5);
    cin>>n;
    p=find(a,a+5,n);
    if(p!=a+5)
    cout<<n<<" is found in "<<*p<<endl;
    else cout<<"not found"<<endl;



/// using vector binary search
//vector<int>v(a,a+5);
//vector<int>:: iterator ii;
//sort(v.begin(),v.end());
//ii=find(v.begin(),v.end(),n);
//if(ii!=v.end())
//cout<<n<<" is found in "<<*ii<<endl;
//else cout<<"not found"<<endl;


    return 0;
}

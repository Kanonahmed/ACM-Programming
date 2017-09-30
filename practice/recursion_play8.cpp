#include<bits/stdc++.h>
using namespace std;
int fab(int n)
{
    //cout<<n<<" ";//pre-order sequence...
    if(n==1){
    cout<<n<<" ";//post-order sequence ....
    return 0;
    }
    if(n==2){
    cout<<n<<" "; //in-order sequence...
    return 0;}
    fab(n-2);
    cout<<n<<" ";
    fab(n-1);
    //cout<<n<<" ";
}
int main()
{
    int n;
cin>>n;
fab(n);

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum,m;
    cin>>m>>n;
    sum=m^n;
    m=2<<m;   //// shift two place in left
    n=n>>2;   ////  shift two place in right /// who shift is located in double angle
    cout<<m<<" "<<n<<endl;
    cout<<sum;



    return 0;
}

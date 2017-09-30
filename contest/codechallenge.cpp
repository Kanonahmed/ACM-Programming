#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,rem,count,tc;
    cin>>tc;
    while(tc--){
    cin>>n;
    p=n;
    count=0;
    while(n)
    {
        rem=n%10;
        if(rem)if(p%rem==0)count++;
        n=n/10;
    }
    cout<<count<<endl;

    }
    return 0;
}

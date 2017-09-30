#include<iostream>
#include<cstdio>
using namespace std;
const int N=100005;
int a[N];
int main()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    for(int i=k; i<=d; i+=k)
    {
        a[i]=1;
    }

    for(int i=l; i<=d; i+=l)
    {
        a[i]=1;
    }

    for(int i=m; i<=d; i+=m)
    {
        a[i]=1;
    }

    for(int i=n; i<=d; i+=n)
    {
        a[i]=1;
    }

    int cnt=0;
    for(int i=1; i<=d; i++)
    {
        if(a[i])cnt++;
    }

    cout<<cnt<<endl;


    return 0;
}

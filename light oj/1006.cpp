#include<bits/stdc++.h>
using namespace std;
long long arr[10001];
long long a,b,c,d,e,f;
long long fn(int n)
{
    if(n==0)
        return a;
    if(n==1)
        return b;
    if(n==2)
        return c;
    if(n==3)
        return d;
    if(n==4)
        return e;
    if(n==5)
        return f;
    if(arr[n]!=-1) return arr[n];
    return arr[n]=(fn(n-1)+fn(n-2)+fn(n-3)+fn(n-4)+fn(n-5)+fn(n-6))%10000007;
}
int main()
{
    int tc;
    long long n;
    cin>>tc;
    int cs=1;
    while(tc)
    {
        memset(arr,-1,sizeof arr);
        cin>>a>>b>>c>>d>>e>>f>>n;
        cout<<"Case "<<cs++<<": "<<fn(n)%10000007<<endl;
        tc--;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int a[20],l;
int b[1000000];
void in(int n)
{
    while(n)
    {
        int rem=n%10;
        a[l++]=rem;
        n=n/10;
    }
}
int fact(int i)
{
    if(i==0)return 1;
    if(i==1)return 1;
    if(b[i]!=-1) return b[i];
    return b[i]=i*fact(i-1);
}
int main()
{
int n;
cin>>n;
in(n);
memset(b,-1,sizeof b);
int sum=1;
for(int i=0;i<l;i++)
{
    sum*=fact(a[i]);
}
cout<<sum<<endl;
    return 0;
}

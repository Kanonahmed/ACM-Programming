#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
int mx=max(n,m);
int cnt=0;
for(int i=0;i<mx;i++)
{
    if(n>=m&&n>=2&&m>=1){n-=2;m-=1;cnt++;}
    else if(m>=n&&m>=2&&n>=1){m-=2;n-=1;cnt++;}
    else break;
}
cout<<cnt<<endl;

    return 0;
}

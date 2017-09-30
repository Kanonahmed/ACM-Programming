#include<bits/stdc++.h>
using namespace std;
int main()
{
int x1,y1,x2,y2,n,x,y,t;
int tc;
cin>>tc;
t=1;
while(tc--){
bool flag=true;
cin>>x1>>y1>>x2>>y2;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>x>>y;
    if(flag)
    {cout<<"Case "<<t<<":"<<endl;flag=false;}
    if(x>x1&&x<x2&&y>y1&&y<y2)
    cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
t++;
}
return 0;
}

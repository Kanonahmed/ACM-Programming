#include<bits/stdc++.h>
#define xx first
#define yy second
using namespace std;
int main()
{
int tc,t=1;
cin>>tc;
while(tc--){
int n;
pair<int ,string>p[2005];
cin>>n;
for(int i=0;i<n;i++)
{
    int x,y,z,mx;
    string nam;
    cin>>nam>>x>>y>>z;
    mx=x*y*z;
    p[i].xx=mx;
    p[i].yy=nam;
}
sort(p,p+n);
set<string>s;
set<string>::iterator j;
if(p[0].xx<p[n-1].xx)
{
    s.insert(p[0].yy);
   for(int i=1;i<n-1;i++)
   {
       if(p[0].xx==p[i].xx)s.insert(p[i].yy);
   }
   cout<<"Case "<<t<<": "<<p[n-1].yy<<" took chocolate from ";
   if(s.size()==n-1&&n-1>1)cout<<"all";
   else
   cout<<p[0].yy;
}
else
cout<<"Case "<<t<<": "<<"no thief";
cout<<endl;
t++;
}


    return 0;
}

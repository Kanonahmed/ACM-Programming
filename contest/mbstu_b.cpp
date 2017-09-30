#include<bits/stdc++.h>
using namespace std;
int main()
{
     int f=1;
     int s=1;
     int sum=2;
     int k;
     cin>>k;
     if(k==1){cout<<"1"<<endl;return 0;}
     if(k==2){cout<<"2"<<endl;return 0;}

     for(int i=3;i<=k;i++)
     {
         int ss=f+s;
         f=s;
         s=ss;
         sum+=ss;
     }
    cout<<sum<<endl;
    return 0;
}

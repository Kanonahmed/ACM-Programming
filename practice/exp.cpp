#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b,int &x,int &y)
{
   if(a==0)
   {
       x=0;y=1;return b;
   }
   int x1,y1;
   int d=gcd(b%a,a,x1,y1);
   x=y1-(b/a)*x1;
   y=x1;
   cout<<x<<" "<<y<<endl;
   return d;
}
int main()
{

    int a,b,x,y;
    cin>>a>>b;
    gcd(a,b,&x,&y);


    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int x[4]={0,0,1,1};
int y[4]={0,1,0,1};
int ds[4]={0,1,1,1};
double al=0.2,th=0.1;
double w1=0.3,w2=-0.1;
double ok(double sum,int cn)
{
      double ch=sum-ds[cn];
      if(ch==0.0)return 0.0;
      else return ch;
}
int main()
{

for(int i=0;i<4;i++)
{
   double sum=0;
   for(int j=0;j<=i;j++)
     sum+=((double)x[j]*w1)+((double)y[j]*w2);
     if(ok(sum,i)!=0.0)
     {
         w1=w1+al*(double)x[i]*ok(sum,i);
         w2=w2+al*(double)y[i]*ok(sum,i);
         cout<<w1<<" "<<w2<<endl;
     }
     else
     {
     cout<<w1<<" "<<w2<<endl;
     }

}
   return 0;
}

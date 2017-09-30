#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int a[10000];
void prime()
{
    int i ,j,lop,k;
    for(k=2; k<103; k++)
        a[k]=1;
        lop=sqrt(103);
    for(i=2; i<=lop; i++)
    {
        if(a[i]==1)
        {
          for(j=2*i;j<103;j+=i)
          a[j]=0;
        }
    }

}
int main()
{
     prime();
 int line,store[100],i,j,count;
 cin>>line;
 while(line!=0)
 {
     void prime();
     for(i=0;i<10;i++)
     cin>>store[i];
     count=0;
     for(i=0;i<10;i++)
     {
         if(a[store[i]]==1)
         count++;
     }
     cout<<count<<endl;

     line--;
 }
 return 0;
}

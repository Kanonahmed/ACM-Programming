#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int row,coloum,i,j,n;
    cin>>n;
    for(row=1;row<=n;row++)
    {
      for(coloum=1;coloum<=n;coloum++)
      {
          if((coloum>1&&coloum<n)&&(row!=1&&row!=n))
          cout<<"  ";
          else
          cout<<"* ";
      }
      cout<<endl;
    }


    return 0;
}

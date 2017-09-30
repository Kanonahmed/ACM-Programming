#include<bits/stdc++.h>
using namespace std;
int ar[52];
int br[52];
int main()
{
    int s,k=1,n;
    cin>>n;
    for(int i=1;i<=50;i++)
    {
        s=(i*(i+1))/2;
        ar[k]=s;
        k++;
    }
    int sum=0;
    int p=1;
    for(int j=1;j<=50;j++)
    {
       sum+=ar[j];
       br[p]=sum;
       p++;
    }
    for(int k=1;k<=50;k++)
    {
        if(br[k]>n)
        {cout<<k-1<<endl;break;}
    }
    return 0;
}


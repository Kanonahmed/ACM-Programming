#include<bits/stdc++.h>
using namespace std;
int go(int n,char beg,char aux,char End)
{
    if(n==1)
    {
        cout<<beg<<" > > "<<End<<endl;
        return 1;
    }
    int r=go(n-1,beg,End,aux);
    int r1=go(1,beg,aux,End);
    int r2=go(n-1,aux,beg,End);
    return r+r1+r2;
}
int main()
{
    cout<<go(3,'a','b','c')<<endl;


    return 0;
}

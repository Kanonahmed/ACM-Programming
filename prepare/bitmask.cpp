#include<bits/stdc++.h>
using namespace std;
int n,a[21];
vector<int>v;
void go(int mask)
{
    //cout<<mask<<endl;
    //getchar();
    if(mask==(1<<n)-1)
    {
       return 0;
    }
    for(int i=0;i<n;i++)
    {
        if((bool)(mask&(1<<i))==0)
            go(mask|(1<<i));
    }
}
int main()
{
   cin>>n;
   for(int i=0;i<n;i++)cin>>a[i];
    go(0);


    return 0;
}

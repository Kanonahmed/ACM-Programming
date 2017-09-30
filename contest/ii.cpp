#include<bits/stdc++.h>
#define N 100000
using namespace std;
int a[N+5];
int main()
{

    int n,k;
    while(cin>>n>>k){
    int d[N+5];
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(i==0)d[0]=x;
        else
        d[i]=d[i-1]+x;
    }
    int heigh;
    int flag=0;
    for(int i=0; i<n; i++)
    {
        if(d[i]>=k)
        {
            heigh=i;
            flag=1;
            break;
        }
    }
    if(flag){
    int low=0;
    int best=heigh-low;
    while(low<=heigh&&heigh<n)
    {
       if(d[low]+k<=d[heigh])
       {
           int l=heigh-low;
           if(best>l)best=l;
           low++;
           if(low==heigh)heigh++;
       }
       else heigh++;
    }
    cout<<best<<endl;}
    else cout<<"0"<<endl;
    }
        return 0;
}

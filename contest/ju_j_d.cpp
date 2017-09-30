#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,a[100];
    cin>>k;
    int fst=0;
    for(int i=0; i<12; i++)
    {
        cin>>a[i];
    }
    if(k==0){cout<<"0"<<endl;return 0;}
    sort(a,a+12);
    int j=0,sum=0;
    int flag=0,l=0;
    for(int i=11; i>=0; i--)
    {
        sum+=a[i];
        if(sum==k)
        {
            j++;break;
        }
        else if(k>sum)
        {
            j++;
        }
        else if(sum>k)
        {
            j++;break;
        }
    }
    if(sum>=k)
    cout<<j<<endl;
    else cout<<"-1"<<endl;
    return 0;
}

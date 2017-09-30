#include<bits/stdc++.h>
using namespace std;
const int N=2000000000;
int a[100];
int b[100];
int id[100];
int L[100];
int ans[100];
int sequence[100];
int main()
{
    int  n;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    id[0]=-N;
    for(int i=1; i<n; i++)
        id[i]=N;
    int ll=0;
    int index;
    for(int i=0; i<n; i++)
    {
        int low,heigh,mid;
        low=0;
        heigh=ll;
        while(low<=heigh)
        {
            mid=(low+heigh)/2;
            if(id[mid]<a[i])
                low=mid+1;
            else
                heigh=mid-1;
        }
        b[i]=low;
        id[low]=a[i];
        if(ll<low)
        {
            ll=low;
            index=i;
        }
    }
    int top=ll-1;
    sequence[top]=a[index];
    top--;
    for(int i=index-1; i>=0; i--)
    {
        if(a[i]<a[index]&&b[i]==b[index]-1)
        {
            sequence[top]=a[i];
            index=i;
            top--;
        }
    }
    for(int i=0; i<ll; i++)
        cout<<sequence[i]<<" ";
    return 0;
}

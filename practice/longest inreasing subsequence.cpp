#include<bits/stdc++.h>
using namespace std;
int a[100];
int b[100];
int sequence[100];
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++)
        b[i]=1;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]<a[j])
            {
                if(b[j]<b[i]+1)
                    b[j]=b[i]+1;
            }
        }
    }

    for(int i=0; i<n; i++)
        cout<<b[i]<<" ";
    cout<<endl;
    int max=0;
    int index=0;
    for( int i=0; i<n; i++)
    {
        if(max<=b[i])
        {
            max=b[i];
            index=i;
        }

    }
    /// cout<<max<<" "<<"index no "<<index<<" value of this index "<<a[index]<<endl;
    int top=max-1;
    sequence[top]=a[index];
    top--;
    for(int j=index-1; j>=0; j--)
    {
        if(a[j]<a[index]&&b[j]==b[index]-1)
        {
            sequence[top]=a[j];
            index=j;
            top--;
        }
    }
    for(int k=0; k<max; k++)
        cout<<sequence[k]<<" ";

    return 0;
}

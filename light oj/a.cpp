#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,tc,a[10000],t=1;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        cin>>a[i];
        int heigh=0,low=0;
       /// int l=a[0];
        for(int i=0;i<n-1;i++)
        {
            //cin>>a[i];
            if(a[i+1]>a[i])
            heigh++;
            else if(a[i+1]<a[i])
            low++;
            else
            continue;
        }
        cout<<"Case "<<t<<": "<<heigh<<" "<<low<<endl;
        t++;
    }


    return 0;
}

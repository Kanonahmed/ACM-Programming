#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[35],p,q,count,sum,flag;
    int tc,t;
    cin>>tc;
    t=1;
    while(tc--)
    {
        count=0;
        sum=0;
        flag=1;
        cin>>n>>p>>q;
        for(int i=0; i<n; i++)
            cin>>a[i];
        //sort(a,a+n);
        for(int j=0; j<n; j++)
        {
            if(a[j]<=q&&count<=p&&(sum+a[j])<=q)
            {
                sum+=a[j];
                count++;
                if(count==p)
                {
                    count++;
                    flag=0;
                }
            }
        }
        if(flag)
            cout<<"Case "<<t<<": "<<count<<endl;
        else
            cout<<"Case "<<t<<": "<<count-1<<endl;
        t++;
    }
    return 0;
}

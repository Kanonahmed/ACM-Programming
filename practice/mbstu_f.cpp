#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,t=1;
    cin>>tc;
    while(tc--)
    {
        int a[100005],n,c;
        cin>>n>>c;
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        int mx=-1,lo=0,hi=a[n-1];
        while(lo<=hi)
        {
            int mid=(lo+hi)/2;
            int cnt=0,pr=a[0];
            for(int i=1;i<n;i++)
                if(a[i]-pr>=mid){cnt++;pr=a[i];}
                if(cnt>=c-1)
                {
                    mx=max(mx,mid);
                    lo=mid+1;
                }
                else hi=mid-1;
        }
        cout<<mx<<endl;
    }



    return 0;
}

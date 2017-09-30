#include<bits/stdc++.h>
#define N 20000
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        if(n==0&&m==0)break;
        int nn[N+5],mm[N+5];
        for(int i=0; i<n; i++)cin>>nn[i];
        for(int i=0; i<m; i++)cin>>mm[i];
        sort(nn,nn+n);
        sort(mm,mm+m);
        if(n>m)
        {
            cout<<"Loowater is doomed!"<<endl;
            continue;
        }
        int j=0,sum=0;
        for(int i=0; i<m; i++)
        {
            if(mm[i]>=nn[j])
            {
                sum+=mm[i];
                j++;
                if(j==n)break;
            }
        }
        if(j==n)cout<<sum<<endl;
        else cout<<"Loowater is doomed!"<<endl;
    }
    return 0;
}

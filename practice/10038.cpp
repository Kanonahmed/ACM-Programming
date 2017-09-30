#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int a[10000];
        int vis[10000];
        int f=0;
        memset(vis,0,sizeof vis);
        for(int i=0; i<n; i++)cin>>a[i];

        for(int i=0; i<n; i++)
        {
            int p=abs(a[i]-a[i+1]);
            if(p<=n-1)
            vis[p]=1;
        }
        for(int j=1; j<n; j++)
            if(!vis[j])
            {
                cout<<"Not jolly"<<endl;
                f=1;break;
            }
            if(!f)
        cout<<"Jolly"<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int vis[105];
int a[105][105];
int main()
{
    int n;
    int cnt=0;
    vector<int>g;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                vis[i]=1;
            }
            else if(a[i][j]==2)
            {
                vis[j]=1;
            }
            else if(a[i][j]==3)
            {
                vis[i]=1;
                vis[j]=1;
            }
        }
    }
    //cout<<n-cnt<<endl;
    for(int i=1;i<=n;i++)
        if(!vis[i])cnt++;
    cout<<cnt<<endl;
    for(int i=1;i<=n;i++)
        if(!vis[i])cout<<i<<" ";

    return 0;
}

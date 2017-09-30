#include<bits/stdc++.h>
using namespace std;
int vis[20005];
int main()
{
    int n,m;
    cin>>n>>m;
    int cnt=0;
    for(int i=0; i<=max(n,m); i++)
    {
        if(!vis[i])
        {
            for(int j=0; j<=max(n,m); j++)
            {
                int k=i*i+j;
                int l=j*j+i;
                if(k==n)
                {
                    if(l==m)
                    {
                       // vis[i]=1;
                        //vis[j]=1;
                        cnt++;
                       // cout<<i<<" "<<j<<endl;
                    }
                }
            }
        }
    }
    cout<<cnt<<endl;

    return 0;
}

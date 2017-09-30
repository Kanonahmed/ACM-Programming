#include<bits/stdc++.h>
using namespace std;
int k,v[1000005][35];
int vis[1000005];
int f[105],s[105];
int a,b;
int binary(int n)
{
    int x=n;
    k=33;
    while(n)
    {
        int rem=n%2;
        v[x][k--]=rem;
        n/=2;
    }
}
int res(int x)
{
    int best=f[0];
    int dif=10000;
    for(int i=0; i<a; i++)
    {
        int cnt=0;
        for(int j=0; j<34; j++)
            if(v[f[i]][j]!=v[x][j])cnt++;
        if(cnt<dif)
        {
            dif=cnt;
            best=f[i];
        }
        else if(cnt==dif)
        {
            if(best>f[i])
            {
                best=f[i];
            }
        }

    }
    return best;
}
int main()
{
    int n;
    int tc;
    cin>>tc;
    while(tc--)
    {
        int c;
        cin>>a>>b;
        for(int i=0; i<a; i++)
        {
            cin>>f[i];
            if(!vis[f[i]])
            {
                binary(f[i]);
                vis[f[i]]=1;
            }
        }
        for(int i=0; i<b; i++)
        {
            cin>>s[i];
            if(!vis[s[i]])
            {
                binary(s[i]);
                vis[s[i]]=1;
            }
            cout<<res(s[i])<<endl;
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
map<int,string>bk;
int dis[25][25];
int n,m;
void f_warshal()
{
    for(int k=1; k<=n; k++)
        for(int i=1; i<=n; i++)
            for(int j=1; j<=n; j++)
                dis[i][j]=min(dis[i][j],dis[i][k]+dis[k][j]);
}
int main()
{
    int tc=1;
    while(cin>>n>>m)
    {
        if(!n&&!m)break;
        for(int i=1; i<=n; i++)
        {
            string s;
            cin>>s;
            mp[s]=i;
            bk[i]=s;
        }
        for(int r=1; r<=n; r++)
        {
            for(int i=1; i<=n; i++)
            {
                if(r==i)dis[r][i]=0;
                else dis[r][i]=1001;
            }
        }

        for(int i=0; i<m; i++)
        {
            int x,y,c;
            cin>>x>>y>>c;
            dis[x][y]=dis[y][x]=c;
        }
        f_warshal();
        int ans,d=1000000000;
        for(int i=1; i<=n; i++)
        {
            int sum=0;
            for(int j=1; j<=n; j++)
                sum+=dis[i][j];
            if(sum<d)
            {
                d=sum;
                ans=i;
            }
        }
        cout<<"Case #"<<tc++<<" : "<<bk[ans]<<endl;
        mp.clear();
        bk.clear();
    }
    return 0;
}

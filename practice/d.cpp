#include<iostream>
#include<cstring>
using namespace std;
int r,c,f,rn,rc;
string grid[505];
int vis[505][505];
int dis[505][505];
void flood(int i,int j)
{
    if(i>=0&&i<r&&j>=0&&j<c)
    {
        vis[i][j]--;
        if(i==rn-1&&j==rc-1)f=1;
        if(vis[i][j]<=0)
        {
            flood(i,j+1);
            flood(i,j-1);
            flood(i-1,j);
            flood(i+1,j);
        }

    }
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        cin>>r>>c;
        for(int i=0; i<r; i++)
        {
            cin>>grid[i];
            for(int j=0; j<c; j++)
            {
                if(grid[i][j]=='*')vis[i][j+1]=2;
                else vis[i][j+1]=0;
            }
        }
        int ir,ic;
        cin>>ir>>ic>>rn>>rc;
        memset(vis,126,sizeof vis);
        f=0;
        flood(ir-1,ic-1);
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        for(int i=0; i<505; i++)grid[i].clear();
    }
}


#include<bits/stdc++.h>
using namespace std;
char cell[55][55];
int vis[55][55];
int lev[55][55];
int n,m,b;
int dx[]= {1,-1,0,0};
int dy[]= {0,0,1,-1};
struct data
{
    int x,y;
};
data st;
int bfs()
{
    queue<data>q;
    vis[st.x][st.y]=1;
    lev[st.x][st.y]=0;
    q.push(st);
    while(!q.empty())
    {
        data t=q.front();
        q.pop();
        data nt;
        for(int k=0; k<4; k++)
        {
            nt.x=t.x+dx[k];
            nt.y=t.y+dy[k];
            if(nt.x>=1&&nt.x<=n&&nt.y>=1&&nt.y<=m&&cell[t.x][t.y]==cell[nt.x][nt.y])
            {
                if(vis[nt.x][nt.y]!=1)
                {
                    vis[nt.x][nt.y]=1;
                    lev[nt.x][nt.y]=lev[t.x][t.y]+1;
                    q.push(nt);
                }
                else if(vis[nt.x][nt.y]==1&&lev[nt.x][nt.y]>lev[t.x][t.y])
                {
                    //cout<<"("<<nt.x<<","<<nt.y<<")"<<endl;
                    b=1;
                    break;
                }
            }
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>cell[i][j];
        }
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            st.x=i;
            st.y=j;
            memset(vis,0,sizeof vis);
            memset(lev,0,sizeof lev);
            b=0;
            bfs();
            if(b==1){cout<<"Yes"<<endl;return 0;}
        }

    }
  cout<<"No"<<endl;

    return 0;
}

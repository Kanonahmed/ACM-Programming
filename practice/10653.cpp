#include<bits/stdc++.h>
#define pp pair<int,int>
#define xx first
#define yy second
using namespace std;
int cell[1002][1002];
int vis[1002][1002];
int cost[1002][1002];
int row,col;
int dx[]= {1,-1,0,0};
int dy[]= {0,0,1,-1};
int bfs(pp st,pp ee)
{
    queue<pp>q;
    vis[st.xx][st.yy]=1;
    cost[st.xx][st.yy]=0;
    q.push(st);
    while(!q.empty())
    {
        pp top=q.front();
        q.pop();
        pp nw;
        for(int k=0; k<4; k++)
        {
            int x=top.xx+dx[k];
            int y=top.yy+dy[k];
            if(x>=0&&x<row&&y>=0&&y<col&&vis[x][y]!=1&&cell[x][y]!=5)
            {
                vis[x][y]=1;
                cost[x][y]=cost[top.xx][top.yy]+1;
                if(x==ee.xx&&y==ee.yy)
                {
                    return cost[x][y];
                }
                q.push(pp(x,y));
            }
        }


    }
}
int main()
{
    while(cin>>row>>col&&row&&col)
    {
        memset(cell,0,sizeof cell);
        memset(vis,0,sizeof vis);
        memset(cost,0,sizeof cost);
        int r;
        cin>>r;
        for(int i=0; i<r; i++)
        {
            int rr,n;
            cin>>rr>>n;
            for(int j=0; j<n; j++)
            {
                int p;
                cin>>p;
                cell[rr][p]=5;
            }
        }
        pp st,en;
        int sx,sy,ex,ey;
        cin>>sx>>sy>>ex>>ey;
        st.xx=sx;
        st.yy=sy;
        en.xx=ex;
        en.yy=ey;
        int t=bfs(st,en);
        cout<<t<<endl;
    }
    return 0;
}


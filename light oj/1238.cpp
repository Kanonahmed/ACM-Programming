#include<bits/stdc++.h>
#define pp pair<int,int>
#define xx first
#define yy second
using namespace std;
int vis[22][22];
int cost[22][22],t;
int row,col;
int dx[]= {1,-1,0,0};
int dy[]= {0,0,1,-1};
string str[22];
int bfs(pp s,pp d)
{
    memset(vis,0,sizeof vis);
    memset(cost,0,sizeof cost);
    t=0;
    queue<pp>q;
    cost[s.xx][s.yy]=0;
    vis[s.xx][s.yy]=1;
    q.push(s);
    while(!q.empty())
    {
        pp top=q.front();
        q.pop();
        pp nw;
        for(int i=0; i<4; i++)
        {
            int x=top.xx+dx[i];
            int y=top.yy+dy[i];
            if(x>=0&&x<row&&y>=0&&y<col&&!vis[x][y]&&str[x][y]!='#'&&str[x][y]!='m')
            {
                vis[x][y]=1;
                cost[x][y]=cost[top.xx][top.yy]+1;
                if(x==d.xx&&y==d.yy)
                {
                    t=cost[x][y];
                    return cost[x][y];
                }
                nw.xx=x;
                nw.yy=y;
                q.push(nw);
            }
        }

    }
}
int main()
{
    int tc,cc=1;
    cin>>tc;
    while(tc--)
    {
        for(int l=0; l<22; l++)str[l].clear();
        pp st,en;
        int flag=0;
        cin>>row>>col;
        for(int i=0; i<row; i++)
        {
            cin>>str[i];
            if(flag==0)
                for(int k=0; k<col; k++ )
                {
                    if(str[i][k]=='h')
                    {
                        flag=1;
                        en.xx=i;
                        en.yy=k;
                    }
                }
        }
        int best=-1;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(str[i][j]=='a')
                {
                    st.xx=i;
                    st.yy=j;
                    t=0;
                    bfs(st,en);
                    if(t>best)best=t;
                }
                else if(str[i][j]=='b')
                {
                    st.xx=i;
                    st.yy=j;
                    bfs(st,en);
                    if(t>best)best=t;
                }
                else if(str[i][j]=='c')
                {
                    st.xx=i;
                    st.yy=j;
                    bfs(st,en);
                    if(t>best)best=t;
                }
            }
        }

        cout<<"Case "<<cc<<": "<<best<<endl;
        cc++;
    }
    return 0;
}


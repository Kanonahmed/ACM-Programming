#include<bits/stdc++.h>
#define pp pair<int,int>
#define xx first
#define yy second
using namespace std;
int dx[]={2,1,-1,-2,-2,-1,1,2};
int dy[]={1,2,2,1,-1,-2,-2,-1};
int vis[9][9];
int cost[9][9],t;
int bfs(pp s,pp end )
{
    queue<pp>q;
    vis[s.xx][s.yy]=1;
    cost[s.xx][s.yy]=0;
    q.push(s);
    while(!q.empty())
    {
        pp top=q.front();q.pop();
        pp nw;
        for(int i=0;i<8;i++)
        {
            int x=top.xx+dx[i];
            int y=top.yy+dy[i];
            if(x>=0&&x<=7&&y>=0&&y<=7&&vis[x][y]!=1)
            {
                vis[x][y]=1;
                cost[x][y]=cost[top.xx][top.yy]+1;
                if(x==end.xx&&y==end.yy){t=cost[x][y];return 0;}
                nw.xx=x;
                nw.yy=y;
                q.push(nw);
            }

        }
    }
}
int main()
{
    string st,en;
    while(cin>>st>>en)
    {
        pp ff,nn;
        ff.xx=st[0]-'a';
        ff.yy=st[1]-'0'-1;
        nn.xx=en[0]-'a';
        nn.yy=en[1]-'0'-1;
        bfs(ff,nn);
        cout<<"To get from "<<st<<" to "<<en<<" takes "<<t<<" knight moves."<<endl;
         memset(vis,0,sizeof vis);
        memset(cost,0,sizeof cost);
        t=0;
    }

    return 0;
}

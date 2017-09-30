#include<bits/stdc++.h>
#define pp pair<int ,int>
#define xx first
#define yy second
using namespace std;
int row;
string s[12];
pp pos[30];
int vis[12][12];
int cost[12][12];
int dx[]= {1,-1,0,0};
int dy[]= {0,0,1,-1};
int bfs(pp src,pp nd)
{
    queue<pp>q;
    vis[src.xx][src.yy]=1;
    q.push(src);
    while(!q.empty())
    {
        pp top=q.front();
        q.pop();
        for(int i=0; i<4; i++)
        {
            int x=top.xx+dx[i];
            int y=top.yy+dy[i];
            if(x>=0&&x<row&&y>=0&&y<row&& !vis[x][y]&&(s[x][y]=='.'||s[x][y]==s[nd.xx][nd.yy]))
            {
                vis[x][y]=1;
                cost[x][y]=cost[top.xx][top.yy]+1;
                if(x==nd.xx&&y==nd.yy)return cost[x][y];
                q.push(make_pair(x,y));
            }
        }
    }
    return -1;
}
int main()
{
    int tc,tt=1;
    cin>>tc;
    while(tc--)
    {
   for(int i=0;i<12;i++)s[i].clear();
        cin>>row;
        int cnt=0;
        for(int i=0; i<row; i++)
        {
            cin>>s[i];
            for(int j=0; j<row; j++)
            {
                if(s[i][j]>='A'&&s[i][j]<='Z')
                {
                    pos[s[i][j]-'A'].xx=i;
                    pos[s[i][j]-'A'].yy=j;
                    cnt++;
                }
            }
        }
        int sum=0;
        for(int c=0; c<cnt-1; c++)
        {
            memset(vis,0,sizeof vis);
            memset(cost,0,sizeof cost);
            int now=bfs(pos[c],pos[c+1]);
            if(now!=-1)
            {
                sum+=now;
                s[pos[c].xx][pos[c].yy]='.';
            }
            else {sum=-1;break;}
        }
        if(sum!=-1)cout<<"Case "<<tt<<": "<<sum<<endl;
        else cout<<"Case "<<tt<<": Impossible"<<endl;
        memset(pos,0,sizeof pos);
           tt++;
    }


    return 0;
}


#include<bits/stdc++.h>
#define pp pair<int,int>
#define xx first
#define yy second
using namespace std;
int row,col,t;
int cell[82][82];
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
int vis[82][82];
int cost[82][82];
int bfs(pp src,pp end)
{
    memset(vis,0,sizeof vis);
    memset(cost,0,sizeof cost);
    queue<pp>q;
    cost[src.xx][src.yy]=0;
    vis[src.xx][src.yy]=1;
    q.push(src);
    while(!q.empty()){
    pp top=q.front();q.pop();
    pp nw;
    for(int k=0;k<4;k++)
    {
        int x=top.xx+dx[k];
        int y=top.yy+dy[k];
        if(x>=0&&x<row&&y>=0&&y<col&& !vis[x][y]&&cell[x][y]==cell[end.xx][end.yy])
        {
            vis[x][y]=1;
            cost[x][y]=cost[top.xx][top.yy]+1;
            if(x==end.xx&&y==end.yy){t=cost[x][y];return cost[x][y];}
            nw.xx=x;
            nw.yy=y;
            q.push(nw);
        }
    }
    }
}
int main()
{
   cin>>row>>col;
   for(int i=0;i<row;i++)
   {
       for(int j=0;j<col;j++)
       cin>>cell[i][j];
   }
   pp f,n;
   int fx,fy,nx,ny;
   cin>>fx>>fy>>nx>>ny;
   f.xx=fx;
   f.yy=fy;
   n.xx=nx;
   n.yy=ny;
     t=0;
     bfs(f,n);
      //cout<<bfs(f,n)<<endl;
      cout<<t<<endl;

    return 0;
}

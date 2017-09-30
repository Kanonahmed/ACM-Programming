#include<bits/stdc++.h>
#define uu first
#define vv second
#define pii pair<int,int>
using namespace std;
int cell[1000][1000];
int d[1000][1000];
int visited[1000][1000];
int level[1000][1000];
int node[1000][1000];
int row,col,xx,yy;
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
void bfs(int sx,int sy)
{
    queue<pii>q;
    visited[sx][sy]=1;
    level[sx][sy]=0;
    q.push(pii(sx,sy));
    while(!q.empty())
    {
        pii top=q.front();q.pop();
        for(int k=0;k<4;k++)
        {
            int tx=top.uu+fx[k];
            int ty=top.vv+fy[k];
            if(tx>=0&&tx<row&&ty>=0&&ty<col&&visited[tx][ty]==0&&cell[tx][ty]!=-1)
            {
                visited[tx][ty]=1;
               // d[tx][ty]=d[top.uu][top.vv];
                level[tx][ty]=level[top.uu][top.vv]+1;
                q.push(pii(tx,ty));
            }
        }
    }


cout<<cell[sx][sy]<<" to "<<cell[xx][yy]<<" distance is "<<level[xx][yy]<<endl;


}
int main()
{
  cin>>row>>col;
  for(int i=0;i<row;i++)
  {
      for(int j=0;j<col;j++)
      //cin>>node[i][j];
      cin>>cell[i][j];
  }
  int x,y;
  cin>>x>>y>>xx>>yy;
   bfs(x,y);

    return 0;
}

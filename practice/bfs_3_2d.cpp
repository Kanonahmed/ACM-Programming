#include<bits/stdc++.h>
using namespace std;
int cell[20][20];
int vis[20][20];
int level[20][20];
int row,col;
struct d
{
    int x,y;
};
d st,en;
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
int bfs()
{
    queue<d>q;
    vis[st.x][st.y]=1;
    level[st.x][st.y]=0;
    q.push(st);
    while(!q.empty())
    {
        d top=q.front();q.pop();
        d nt;
        for(int i=0;i<4;i++)
        {
            nt.x=top.x+dx[i];
            nt.y=top.y+dy[i];
            if(nt.x>=1&&nt.x<=row&&nt.y>=1&&nt.y<=col&&cell[nt.x][nt.y]!=-1&&vis[nt.x][nt.y]!=1)
            {
                vis[nt.x][nt.y]=1;
                level[nt.x][nt.y]=level[top.x][top.y]+1;
                q.push(nt);
            }
        }
    }

}
int main()
{
  cin>>row>>col;
  for(int i=1;i<=row;i++)
  {
      for(int j=1;j<=col;j++)
      {
          cin>>cell[i][j];
      }
  }
 int r,c;
 //cin>>r>>c;
 cin>>st.x>>st.y;
 cin>>en.x>>en.y;
 bfs();
 cout<<cell[st.x][st.y]<<" to "<<cell[en.x][en.y]<<" distance is "<<level[en.x][en.y]<<endl;



    return 0;
}

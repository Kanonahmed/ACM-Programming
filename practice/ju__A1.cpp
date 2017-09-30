#include<iostream>
#include<cstdio>
#include<string>
#include<queue>
#include<cstring>
using namespace std;
char cell[35][35][35];
struct data
{
    int x,y,z;
};
data st,end;
int row,col,lev;
int vis[35][35][35];
int level[35][35][35];
int dx[]= {0,0,0,0,1,-1};
int dy[]= {0,0,1,-1,0,0};
int dz[]= {1,-1,0,0,0,0};
int  bfs()
{
    queue<data>q;
    vis[st.x][st.y][st.z]=1;
    level[st.x][st.y][st.z]=0;
    q.push(st);
    while(!q.empty())
    {
        data top=q.front();
        q.pop();
        data nt;
        for(int i=0; i<6; i++)
        {
            int x=top.x+dx[i];
            int y=top.y+dy[i];
            int z=top.z+dz[i];
            if(x>=1&&x<=lev&&y>=1&&y<=row&&z>=1&&z<=col&&cell[x][y][z]!='#'&& vis[x][y][z]!=1)
            {
                vis[x][y][z]=1;
                nt.x=x;
                nt.y=y;
                nt.z=z;
                level[nt.x][nt.y][nt.z]=level[top.x][top.y][top.z]+1;
                if(x==end.x&&y==end.y&&z==end.z)
                {
                    return true;
                }
                q.push(nt);
            }
        }
    }
    return false;
}
int main()
{
    while(cin>>lev>>row>>col)
    {
        if(lev==0&&col==0&&row==0)break;
        memset(vis,0,sizeof vis);
        memset(level,0,sizeof level);
        for(int i=1; i<=lev; i++)
        {
            for(int j=1; j<=row; j++)
            {
                for(int k=1; k<=col; k++)
                {
                    cin>>cell[i][j][k];
                    if(cell[i][j][k]=='S')
                    {
                        st.x=i,st.y=j,st.z=k;
                    }
                    if(cell[i][j][k]=='E')
                    {
                        end.x=i,end.y=j,end.z=k;
                    }

                }
            }
        }
        int t=bfs();
        if(t==1)
            cout<<"Escaped in "<<level[end.x][end.y][end.z]<<" minute(s)."<<endl;
        else cout<<"Trapped!"<<endl;
    }
    return 0;
}

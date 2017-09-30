#include<bits/stdc++.h>
using namespace std;
int l,r,c;
char s[35][35][35];
int lev[35][35][35];
int vis[35][35][35];
int dx[]={-1,1,0,0,0,0};
int dy[]={0,0,1,-1,0,0};
int dz[]={0,0,0,0,1,-1};
struct data
{
    int x,y,z;
    //data(int __x,int __y,int __z){x=__x;y=__y;z=__z;}
};
  int bfs(data sr, data tr)
  {
      queue<data>q;
     memset(vis,0,sizeof vis);
     memset(lev,0,sizeof lev);
     vis[sr.x][sr.y][sr.z]=1;
     lev[sr.x][sr.y][sr.z]=0;
     q.push(sr);
     while(!q.empty())
     {
         data u=q.front();q.pop();
         if(u.x==tr.x&&u.y==tr.y&&u.z==tr.z)return lev[u.x][u.y][u.z];
         data v;
         for(int i=0;i<6;i++)
         {
             v.x=dx[i]+u.x;
             v.y=dy[i]+u.y;
             v.z=dz[i]+u.z;
             if(v.x>=1&&v.x<=l&&v.y>=1&&v.y<=r&&v.z>=1&&v.z<=c&&!vis[v.x][v.y][v.z]&&s[v.x][v.y][v.z]!='#')
             {
                 vis[v.x][v.y][v.z]=1;
                 lev[v.x][v.y][v.z]=lev[u.x][u.y][u.z]+1;
                 q.push(v);
             }
         }
     }
     return -1;
  }
int main()
{
    data st,nd;
    while(cin>>l>>r>>c)
    {
        if(!l&&!r&&!c)break;
        for(int i=1; i<=l; i++)
        {
            for(int j=1; j<=r; j++)
            {
                for(int k=1; k<=c; k++)
                {
                    cin>>s[i][j][k];
                    if(s[i][j][k]=='S'){st.x=i;st.y=j;st.z=k;}
                    if(s[i][j][k]=='E'){nd.x=i;nd.y=j;nd.z=k;}
                }
            }
        }

      int fl=bfs(st,nd);
      if(fl==-1)
      cout<<"Trapped!"<<endl;
      else
        cout<<"Escaped in "<<fl<<" minute(s)."<<endl;
    }

    return 0;
}

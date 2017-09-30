#include<bits/stdc++.h>
using namespace std;
string s[12];
int n;
int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
bool vis[12][12][12][12][12][12];
int dis[12][12][12][12][12][12];
struct data
{
    int ax,ay,bx,by,cx,cy;
    data(int x,int _x,int __x,int ___x,int ____x,int _____x)
    {
        ax=x,ay=_x,bx=__x,by=___x,cx=____x,cy=_____x;
    }
};
bool ok(int x,int y)
{
    if(x>=0&&x<n&&y>=0&&y<n&&s[x][y]!='#')return true;
    return false;
}
int go(int fx,int fy,int sx,int sy,int tx,int ty)
{

   memset(vis,0,sizeof vis);
   memset(dis,0,sizeof dis);
   vis[fx][fy][sx][sy][tx][ty]=1;
   queue<data>q;
   q.push(data(fx,fy,sx,sy,tx,ty));
   while(!q.empty())
   {
       data u=q.front();q.pop();
       for(int i=0;i<4;i++)
       {
           int nax=u.ax+dx[i];
           int nbx=u.bx+dx[i];
           int ncx=u.cx+dx[i];
           int nay=u.ay+dy[i];
           int nby=u.by+dy[i];
           int ncy=u.cy+dy[i];
           if(!ok(nax,nay))nax=u.ax,nay=u.ay;
           if(!ok(nbx,nby))nbx=u.bx,nby=u.by;
           if(!ok(ncx,ncy))ncx=u.cx,ncy=u.cy;

           if((nax==nbx&&nay==nby)||(nax==ncx&&nay==ncy))nax=u.ax,nay=u.ay;
           if((nbx==nax&&nby==nay)||(nbx==ncx&&nby==ncy))nbx=u.bx,nby=u.by;
           if((ncx==nax&&ncy==nay)||(ncx==nbx&&ncy==nby))ncx=u.cx,ncy=u.cy;

           if((nax==nbx&&nay==nby)||(nax==ncx&&nay==ncy))continue;
           if((nbx==nax&&nby==nay)||(nbx==ncx&&nby==ncy))continue;

               if(vis[nax][nay][nbx][nby][ncx][ncy]==0)
               {

                   vis[nax][nay][nbx][nby][ncx][ncy]=1;
                   dis[nax][nay][nbx][nby][ncx][ncy]=dis[u.ax][u.ay][u.bx][u.by][u.cx][u.cy]+1;
                   if(s[nax][nay]=='X'&&s[nbx][nby]=='X'&&s[ncx][ncy]=='X')return dis[nax][nay][nbx][nby][ncx][ncy];
                   q.push(data(nax,nay,nbx,nby,ncx,ncy));
               }
       }
   }
    return -1;
}
int main()
{
    int tc,ks=1;
    cin>>tc;
    while(tc--)
    {
         int fx,fy,sx,sy,tx,ty;
         scanf("%d",&n);
         for(int i=0;i<n;i++)
         {
             cin>>s[i];
             for(int j=0;j<n;j++)
             {
                 if(s[i][j]=='A')fx=i,fy=j;
                 if(s[i][j]=='B')sx=i,sy=j;
                 if(s[i][j]=='C')tx=i,ty=j;
             }
         }
         int res=go(fx,fy,sx,sy,tx,ty);
        if(res==-1)printf("Case %d: trapped\n",ks++);
        else printf("Case %d: %d\n",ks++,res);
    }



    return 0;
}

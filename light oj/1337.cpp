#include<bits/stdc++.h>
using namespace std;
int n,m,q;
char ss[505][505];
int vis[505][505];
int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
int go(int x,int y,int fx)
{
    vis[x][y]=fx;
    int res=0;
    for(int i=0;i<4;i++)
    {
        int nx=x+dx[i];
        int ny=y+dy[i];
        if((nx>=0&&nx<n)&&(ny>=0&&ny<m)&&ss[nx][ny]!='#'&&!vis[nx][ny])
            res+=(ss[nx][ny]=='C')+go(nx,ny,fx);
    }
    return res;
}
int main()
{
    int tc,ks=1;
    cin>>tc;
     while(tc--)
     {
         int ans[505*505]={0};
         scanf("%d %d %d",&n,&m,&q);
         for(int i=0;i<n;i++)scanf("%s",ss[i]);
          memset(vis,0,sizeof vis);
         printf("Case %d:\n",ks++);
         int h=0;
         for(int i=0;i<q;i++)
         {
             int x,y;
             scanf("%d %d",&x,&y);
             x--;y--;
             int l=vis[x][y];
             if(l!=0)
             printf("%d\n",ans[l]);
             else
             {
                 h++;
                 ans[h]=go(x,y,h);
                 printf("%d\n",ans[h]);
             }
         }
     }


    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,t=1;
    while(cin>>x>>y)
    {
        if(!x&&!y)break;
        vector<int>v;
        int vis[105];
        memset(vis,0,sizeof vis);
        v.push_back(x);
        v.push_back(y);
        vis[x]=1;
        vis[y]=1;
        int dis[105][105];
        memset(dis,63,sizeof dis);
        for(int i=1;i<=100;i++)dis[i][i]=0;
        dis[x][y]=1;
        int xx,yy;
        while(cin>>xx>>yy)
        {
            if(!xx&&!yy)break;
            if(!vis[xx])
            v.push_back(xx);
            if(!vis[yy])
            v.push_back(yy);
            vis[xx]=1;
            vis[yy]=1;
            dis[xx][yy]=1;
        }
        for(int k=1;k<=100;k++)
            for(int i=1;i<=100;i++)
              for(int j=1;j<=100;j++)
                 {
                   if(dis[i][j]>(dis[i][k]+dis[k][j]))
                     {
                       dis[i][j]=dis[i][k]+dis[k][j];
                     }
                  }
                  double sum=0;
                  int sz=v.size();
                  for(int i=0;i<sz;i++)
                  {
                      for(int j=0;j<sz;j++)
                        sum+=dis[v[i]][v[j]];
                  }
                  sum=sum/(double)((sz-1)*sz);
                printf("Case %d: average length between pages = %.3f clicks\n",t++,sum);

    }
    return 0;
}

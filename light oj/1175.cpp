#include<bits/stdc++.h>
using namespace std;
const int MX=INT_MAX;
string s[205];
int jone[205][205],fire[205][205],n,m;
int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
vector<pair<int,int> >v,bv;
void go(int f)
{
    bool vis[205][205]={0};
    queue<pair<int,int> >q;
    if(f)
        for(int i=0;i<v.size();i++)
        {
            int x=v[i].first,y=v[i].second;
            vis[x][y]=1;
            fire[x][y]=0;
            q.push({x,y});
        }
        else
            for(int i=0;i<bv.size();i++)
        {
            int x=bv[i].first,y=bv[i].second;
            vis[x][y]=1;
            jone[x][y]=0;
            q.push({x,y});
        }

    while(!q.empty())
    {
        int xx=q.front().first;
        int yy=q.front().second;
        q.pop();
        for(int i=0;i<4;i++)
        {
            int nx,ny;
            nx=xx+dx[i];
            ny=yy+dy[i];
            if(nx>=0&&nx<n&&ny>=0&&ny<m&&!vis[nx][ny]&&s[nx][ny]!='#')
            {
                vis[nx][ny]=1;
                if(f)fire[nx][ny]=fire[xx][yy]+1;
                else jone[nx][ny]=jone[xx][yy]+1;
                q.push({nx,ny});
            }
        }
    }
}
int main()
{
   int tc,ks=1;
   cin>>tc;
   while(tc--)
   {
      for(int i=0;i<205;i++)
      for(int j=0;j<205;j++){fire[i][j]=MX;jone[i][j]=MX;}
      v.clear();
      bv.clear();
       scanf("%d %d",&n,&m);
       for(int i=0;i<n;i++){
            cin>>s[i];
           for(int j=0;j<m;j++){
                               if(s[i][j]=='F')v.push_back({i,j});
                                if(s[i][j]=='J')bv.push_back({i,j});
                               }
       }

       go(1);
       go(0);

       int chk=0,ans=MX;
             for(int i=0;i<n;i++)
              {
                  if(i==0||i==n-1)
                  {
                      for(int j=0;j<m;j++)
                        if(jone[i][j]<fire[i][j])
                      {
                          chk=1;ans=min(ans,jone[i][j]);
                      }
                  }
                  else
                  {
                      if(jone[i][0]<fire[i][0]){chk=1;ans=min(ans,jone[i][0]);}
                      if(jone[i][m-1]<fire[i][m-1]){chk=1;ans=min(ans,jone[i][m-1]);}
                  }
              }

         if(chk)printf("Case %d: %d\n",ks++,ans+1);
         else printf("Case %d: IMPOSSIBLE\n",ks++);

   }



    return 0;
}

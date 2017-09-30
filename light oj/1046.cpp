#include<bits/stdc++.h>
using namespace std;
string s[12];
int n,m,dp[12][12],koita[12][12];
bool vis[12][12];
int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
void go(int r,int c,int kk)
{
    memset(vis,0,sizeof vis);
    vis[r][c]=1;
    koita[r][c]++;
    queue<pair<pair<int,int> ,int> >q;
    q.push({{r,c},0});
    while(!q.empty())
    {
        pair<pair<int,int> ,int> u;
        u=q.front();q.pop();
        int x=u.first.first,y=u.first.second;
        int cs=u.second;
        for(int i=0;i<8;i++)
        {
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(!vis[nx][ny]&&nx>=0&&nx<n&&ny>=0&&ny<m)
            {
                vis[nx][ny]=1;
                koita[nx][ny]++;
                dp[nx][ny]+=ceil(1.00*(cs+1)/kk);
                q.push({{nx,ny},cs+1});
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
       for(int i=0;i<12;i++)s[i].clear();
       memset(dp,0,sizeof dp);
       memset(koita,0,sizeof koita);
       scanf("%d %d",&n,&m);
       for(int i=0;i<n;i++)
        cin>>s[i];
        int t=0;
         for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
         {
             if(s[i][j]!='.')
                {go(i,j,s[i][j]-'0');t++;}
         }
       int best=2000000000;
       for(int i=0;i<n;i++)
          for(int j=0;j<m;j++)if(koita[i][j]==t)best=min(best,dp[i][j]);
          if(best==2000000000)best=-1;
          printf("Case %d: %d\n",ks++,best);
   }



    return 0;
}

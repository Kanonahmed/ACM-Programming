
#include<bits/stdc++.h>
using namespace std;
vector<int>edge[205];
int cell[205][205][205];
int vis[205],n,e;
int bfs(int st,int ed,int c)
{
    queue<int>q;
    vis[st]=1;
    q.push(st);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0; i<edge[u].size(); i++)
        {
            int v=edge[u][i];
            if(!vis[v]&&cell[u][v][c])
            {
                vis[v]=1;
                q.push(v);
                if(v==ed) return 1;
            }
        }
    }
    return 0;
}
int main()
{
    cin>>n>>e;
    for(int i=1; i<=e; i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        edge[x].push_back(y);
        edge[y].push_back(x);
        cell[x][y][z]=1;
        cell[y][x][z]=1;
    }
    int xx,yy,tc;
    cin>>tc;
    while(tc--)
    {
        cin>>xx>>yy;
        int ans=0;
        for(int i=1; i<=e; i++)
        {
            memset(vis,0,sizeof vis);
            if(bfs(xx,yy,i)) ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
vector<int>v[100];
int vis[100],lev[100];
int n,e,b;
int bfs(int st)
{
    queue<int>q;
    vis[st]=1;
    lev[st]=0;
    q.push(st);
    while(!q.empty())
    {
        int u=q.front();q.pop();
        for(int i=0;i<v[u].size();i++)
        {
            int vv=v[u][i];
            if(vis[vv]!=1)
            {
                vis[vv]=1;
                lev[vv]=lev[u]+1;
                q.push(vv);
                cout<<vv<<" "<<lev[vv]<<endl;
            }
            else if(vis[vv]==1&&(lev[u]-lev[vv])>1)
            {
                b=1;
                break;
            }
        }
    }

}
int main()
{
  cin>>n>>e;
  for(int i=0;i<e;i++)
  {
      int x,y;
      cin>>x>>y;
      v[x].push_back(y);
      v[y].push_back(x);
  }
  int st;
  cin>>st;
 b=0;
 bfs(st);
// if(b==1)cout<<"yes"<<endl;
// else cout<<"no"<<endl;


    return 0;
}

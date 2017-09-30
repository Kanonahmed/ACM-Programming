#include<bits/stdc++.h>
using namespace std;
int ap,jb,rl,vis[100],lft[100];
vector<int>adj[100];
bool BPM(int u)
{
    for(int i=0;i<adj[u].size();i++)
    {
        int v=adj[u][i];
        if(!vis[v])
        {
            vis[v]=1;
            if(lft[v]==-1||BPM(lft[v]))
            {
                lft[v]=u;
                return true;
            }
        }
    }
    return false;
}
int match()
{
    int res=0;
    memset(lft,-1,sizeof (lft));
    for(int i=0;i<ap;i++)
    {
        memset(vis,0,sizeof(jb));
        if(BPM(i))res++;
    }
    return res;
}
int main()
{
  cin>>ap>>jb>>rl;
  for(int i=0;i<rl;i++)
  {
      int x,y;
      cin>>x>>y;
      adj[x].push_back(y);
  }

  cout<<match()<<endl;

    return 0;
}

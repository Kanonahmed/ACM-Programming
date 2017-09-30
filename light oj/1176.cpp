#include<bits/stdc++.h>
using namespace std;
vector<int>adj[1000];
int a[1000][1000],p[1000];
map<string,int>mp;
bool bfs(int s,int d)
{
    bool vis[1000]={0};
    vis[s]=1;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int u=q.front();q.pop();
        if(u==d)return true;
        for(int i=0;i<adj[u].size();i++)
        {
            int v=adj[u][i];
            if(a[u][v]>0&&!vis[v]){vis[v]=1;p[v]=u;q.push(v);}
        }
    }
    return false;
}
int fold_fulkarson(int s,int d)
{
    int mx=0;
    while(bfs(s,d))
    {
        int mn=INT_MAX;
        for(int v=d;v!=s;v=p[v])mn=min(a[p[v]][v],mn);

        for(int v=d;v!=s;v=p[v])
        {
            int u=p[v];
            a[u][v]-=mn;
            a[v][u]+=mn;
        }
        mx+=mn;
    }
    return mx;
}
int main()
{
    mp["XXL"]=100;
    mp["XL"]=101;
    mp["L"]=102;
    mp["M"]=103;
    mp["S"]=104;
    mp["XS"]=105;
 int tc,ks=1;
 cin>>tc;
 while(tc--){
        memset(a,0,sizeof a);
        memset(p,0,sizeof p);
        for(int i=0;i<1000;i++)adj[i].clear();
    int n,m,s=0,d=110;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        string x,y;cin>>x>>y;
        adj[i].push_back(mp[x]);
        adj[i].push_back(mp[y]);
        adj[mp[x]].push_back(i);
        adj[mp[y]].push_back(i);
        a[i][mp[x]]=1;
        a[i][mp[y]]=1;
        a[s][i]=1;
        adj[s].push_back(i);
        adj[i].push_back(s);
    }
    for(int i=100;i<=105;i++)
    {
        adj[i].push_back(d);
        adj[d].push_back(i);
        a[i][d]=n;
    }
  int res=fold_fulkarson(s,d);
  if(res<m)printf("Case %d: NO\n",ks);
  else printf("Case %d: YES\n",ks);
  ks++;
 }
    return 0;
}

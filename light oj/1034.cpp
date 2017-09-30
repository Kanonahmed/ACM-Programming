#include<bits/stdc++.h>
using namespace std;
vector<int>graph[10002];
int n,m,st[10002],nd[10002],onstk[10002],scc[10002],tim,ns,res,dif,np[10002],vis[10002];
stack<int>stk;
int tarzan(int u)
{
   st[u]=nd[u]=tim;
   tim++;
   onstk[u]=1;
   stk.push(u);
   for(int i=0;i<graph[u].size();i++)
   {
       int v=graph[u][i];
       if(st[v]==-1){tarzan(v);st[u]=min(st[u],st[v]);}
       else if(onstk[v])st[u]=min(st[u],st[v]);
   }
   if(st[u]==nd[u])
   {
       int v;
       dif=0;
       do
       {
           v=stk.top();
           stk.pop();
           onstk[v]=0;
           scc[v]=ns;
       }while(u!=v);
       ns++;
   }
}
void dfs(int x)
{
    if(vis[x])return;
    vis[x]=1;
    for(int i=0;i<graph[x].size();i++)
    {
        int y=graph[x][i];
        if(scc[x]!=scc[y])
        {
            np[scc[y]]++;
            dfs(y);
        }
    }
}
int main()
{
    int tc,t=1;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>m;
        for(int i=0; i<m; i++)
        {
            int x,y;
            cin>>x>>y;
            graph[x].push_back(y);
        }
        memset(st,-1,sizeof st);
        memset(nd,-1,sizeof nd);
        memset(scc,-1,sizeof scc);
        memset(onstk,0,sizeof onstk);
        memset(vis,0,sizeof vis);
        memset(np,0,sizeof np);
        for(int i=1;i<=n;i++)if(scc[i]==-1)tarzan(i);
            //for(int i=1;i<=n;i++)
            //cout<<"scc["<<i<<"]= "<<scc[i]<<endl;
            for(int i=1;i<=n;i++)if(!vis[i])dfs(i);
             res=0;
            for(int i=0;i<ns;i++)
                if(!np[i])res++;
        cout<<"Case "<<t<<": "<<res<<endl;
        for(int i=0;i<10002;i++)graph[i].clear();
        ns=0;
        tim=0;
        t++;
    }


    return 0;
}

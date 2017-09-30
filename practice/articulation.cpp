#include<bits/stdc++.h>
using namespace std;
int vis[500],strt[500],lo[500],tim;
vector<int>grd[500],ar;
void go(int u,int pr)
{
    strt[u]=lo[u]=tim++;
    int child=0,ch=0;
    vis[u]=1;
    for(int i=0;i<grd[u].size();i++)
    {
        int v=grd[u][i];
        if(vis[v])
        {
            lo[u]=min(lo[u],strt[v]);
        }
        else
        {
            go(v,u);
            lo[u]=min(lo[u],lo[v]);
            if(strt[u]<=lo[v])ch=1;
        }
    }
    if((pr==-1&&child>1)||(pr!=-1&&ch))ar.push_back(u);
}
int main()
{
    int n,ed;
    cin>>n>>ed;
    for(int i=0;i<ed;i++)
    {
        int x,y;cin>>x>>y;
        grd[x].push_back(y);
        grd[y].push_back(x);
    }
    tim=1;
    go(1,-1);
   for(int i=0;i<ar.size();i++)cout<<ar[i]<<endl;

    return 0;
}

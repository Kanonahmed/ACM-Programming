#include<bits/stdc++.h>
using namespace std;
int vis[10005],strt[10005],lo[10005],tim,cnt;
vector<int>grd[20005],ar;
void go(int u,int pr)
{
    strt[u]=lo[u]=tim++;
    int child=0,ch=0;
    vis[u]=1;
    for(int i=0;i<grd[u].size();i++)
    {
        int v=grd[u][i];
        if(v==pr)continue;
        if(vis[v])
        {
            lo[u]=min(lo[u],strt[v]);
        }
        else
        {
            go(v,u);
            lo[u]=min(lo[u],lo[v]);
            if(strt[u]<=lo[v])ch=1;
            child++;
        }
    }
       if(pr==-1&&child>1)cnt++;
       else if(pr!=-1&&ch)cnt++;
       else {int j;}
}
int main()
{
    int tc,ts=1;
    cin>>tc;
    while(tc--){
            for(int i=0;i<10005;i++)grd[i].clear();
            memset(vis,0,sizeof vis);
            cnt=0;
    int n,ed;
    cin>>n>>ed;
    for(int i=0;i<ed;i++)
    {
        int x,y;cin>>x>>y;
        grd[x].push_back(y);
        grd[y].push_back(x);
    }
    tim=1;
    for(int i=1;i<=n;i++)if(!vis[i])
    go(i,-1);
    //for(int i=0;i<ar.size();i++)cout<<ar[i]<<endl;
    printf("Case %d: %d\n",ts++,cnt);
    //for(int i=0;i<ar.size();i++)cout<<ar[i]<<endl;
    }
    return 0;
}


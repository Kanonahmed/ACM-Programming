#include<bits/stdc++.h>
using namespace std;
vector<int>g[1005];
int n,ed,tk[1005],sum;
bool vis[1005];
int go(int u)
{
    sum+=tk[u];
    //cout<<u<<" "<<sum<<endl;
    vis[u]=1;
    int tot=1;
    for(int i=0;i<g[u].size();i++)
    {
        int v=g[u][i];
        if(!vis[v])
          tot+=go(v);
    }
    return tot;
}
int main()
{
    int tc,ks=1;
    scanf("%d",&tc);
    while(tc--)
    {
        memset(vis,0,sizeof vis);
        for(int i=0;i<1005;i++)g[i].clear();
        scanf("%d %d",&n,&ed);

        for(int i=1;i<=n;i++)scanf("%d",&tk[i]);
        for(int i=0;i<ed;i++)
        {
            int x,y;scanf("%d %d",&x,&y);
            g[x].push_back(y);
            g[y].push_back(x);
        }
        int av[1005],p=1;
        int chk=0;
        for(int i=1;i<=n;i++)
        {
            if(!vis[i])
            {
                sum=0;
                int nn=go(i);
                if(sum%nn){chk=1;break;}
                av[p++]=sum/nn;
            }
        }
        for(int i=1;i<p-1;i++)
        {
            if(av[i]!=av[i+1]){chk=1;break;}
        }

        if(chk)printf("Case %d: No\n",ks++);
        else
            printf("Case %d: Yes\n",ks++);
    }



    return 0;
}

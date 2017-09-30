#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> >ad[30005];
int dp[30005],vp[30005];
void go(int u,int pr,int ch,int vl)
{
    for(int i=0;i<ad[u].size();i++)
    {
        int v=ad[u][i].first;
        if(v!=pr)
        go(v,u,ch,vl+ad[u][i].second);
    }
    if(ch==1)dp[u]=vl;
    else vp[u]=vl;
}
int main()
{
    int tc,ks=1;
    cin>>tc;
    while(tc--)
    {
        for(int i=0;i<30005;i++)ad[i].clear();
        int n;
        scanf("%d",&n);
        for(int i=0;i<n-1;i++)
        {
            int u,v,c;
            scanf("%d %d %d",&u,&v,&c);
            ad[u].push_back({v,c});
            ad[v].push_back({u,c});
        }
        printf("Case %d:\n",ks++);
        int st,en,dis=-1;
        go(0,-1,1,0);
        for(int i=0;i<n;i++)if(dis<dp[i]){st=i;dis=dp[i];}
        dis=-1;
        go(st,-1,1,0);
        for(int i=0;i<n;i++)if(dis<dp[i]){en=i;dis=dp[i];}
        go(en,-1,2,0);

        for(int i=0;i<n;i++)
        {
            printf("%d\n",max(dp[i],vp[i]));
        }
    }



    return 0;
}

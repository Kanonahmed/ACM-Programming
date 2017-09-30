#include<bits/stdc++.h>
using namespace std;
vector<int>v[200005];
bool vis[200005];
int child;
int go(int u,int ch)
{
     vis[u]=1;
     int res=0;
     for(int i=0;i<v[u].size();i++)
     {
         int nx=v[u][i];
         if(!vis[nx]){
            child++;
         if(ch==1)res+=go(nx,0);
         else res+=go(nx,1);
         }
     }
    if(ch==1)res++;
   return res;
}
int main()
{
    int tc,ks=1;
    cin>>tc;
    while(tc--)
    {
        int n;
        set<int>vv;
        scanf("%d",&n);
        memset(vis,0,sizeof vis);
        for(int i=0;i<200005;i++)v[i].clear();
        for(int i=0;i<n;i++)
        {
            int x,y;
            scanf("%d %d",&x,&y);
            v[x].push_back(y);
            v[y].push_back(x);
            vv.insert(x);
            vv.insert(y);
        }
        set<int>::iterator it;
        int ans=0;
        for(it=vv.begin();it!=vv.end();it++)
        {

            if(!vis[*it])
            {
                child=1;
                int tmp=go(*it,1);
                ans+=max(tmp,child-tmp);
            }
        }
        printf("Case %d: %d\n",ks++,ans);
    }



    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int n,m,k;
int clr[200005];
bool vis[200002];
vector<int>ad[200002];
vector<int>save;
void go(int u)
{
    vis[u]=1;
    save.push_back(clr[u]);
    for(int i=0;i<ad[u].size();i++)
    {
        int v=ad[u][i];
        if(!vis[v])
            go(v);
    }
    return ;
}
int main()
{
   cin>>n>>m>>k;
   for(int i=1;i<=n;i++)scanf("%d",&clr[i]);
   for(int i=0;i<m;i++)
   {
       int x,y;
       scanf("%d%d",&x,&y);
       ad[x].push_back(y);
       ad[y].push_back(x);
   }

   int ans=0;
   for(int i=1;i<=n;i++)
   {
        if(!vis[i])
        {
            save.clear();
            go(i);
            sort(save.begin(),save.end());
            int mx=1;
            int cnt=1;
            for(int j=1;j<save.size();j++)
            {
                if(save[j-1]==save[j])cnt++;
                else
                {
                    mx=max(mx,cnt);
                    cnt=1;
                }
            }
            mx=max(mx,cnt);
            int l=save.size();
            ans+=max(0,l-mx);
        }
   }

  cout<<ans<<endl;

    return 0;
}

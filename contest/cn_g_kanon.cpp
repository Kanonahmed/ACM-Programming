#include<bits/stdc++.h>
using namespace std;
vector<int>prim_f[1010];
int vis[1010],num[1010],prim[1010];
void seive()
{
   int k=0;
   prim[k++]=2;
    for(int i=3;i<=1000;i+=2)
    {
        if(!vis[i])
        {
          prim[k++]=i;
            for(int j=i*i;j<=1000;j+=i)vis[j]=1;
        }
    }
}
void prim_fact()
{
    for(int i=1;i<=1000;i++)
    {
        int n=i;
        for(int j=0;prim[j]<=sqrt(n);j++)
        {
            if(n%prim[j]==0)
            {
                prim_f[i].push_back(prim[j]);
                while(n%prim[j]==0)
                {
                    n=n/prim[j];
                }
            }
        }
        if(n>1&&n!=i)prim_f[i].push_back(n);
    }
}

int bfs(int st,int ed)
{
    if(st>ed)return -1;
    if(st==ed)return 0;
    queue<int>q;
    memset(num,0,sizeof num);
    q.push(st);
    num[st]=0;
    while(!q.empty())
    {
        int u=q.front();q.pop();
        for(int i=0;i<prim_f[u].size();i++)
        {
            int n=prim_f[u][i];
            int c=n+u;
            if(c==ed)return num[u]+1;
            else if(c<ed&&!num[c])
            {
                num[c]=num[u]+1;
                q.push(c);
            }
        }
    }
    return -1;
}
int main()
{
   int s,t,tc=1;
   seive();
    prim_fact();
   while(scanf("%d%d",&s,&t)==2)
   {
       if(s==0&&t==0)break;
       printf("Case %d: %d\n",tc,bfs(s,t));
       tc++;
   }


    return 0;
}

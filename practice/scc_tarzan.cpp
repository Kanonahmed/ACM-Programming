#include<bits/stdc++.h>
using namespace std;
const int N=1000;
vector<int>graph[N];
int st[N],nd[N],onstak[N],scc[N];
int tim,ns;
stack<int>stk;
void tarzan(int u)
{
    st[u]=nd[u]=tim;
    tim++;
    onstak[u]=1;
    stk.push(u);
    for(int i=0;i<graph[u].size();i++)
    {
       int v=graph[u][i];
        if(st[v]==-1){tarzan(v);st[u]=min(st[v],st[u]);}
        else if(onstak[v]) st[u]=min(st[v],st[u]);
    }
    if(st[u]==nd[u])
    {
        int v;
        do
        {
             v=stk.top();
            stk.pop();
            scc[v]=ns;
            onstak[v]=0;
        }while(u!=v);
        ns++;
    }
}
int main()
{
   int n,m;
   //tm=0;
   cin>>n>>m;
   for(int i=0;i<m;i++)
   {
       int u,v;
       cin>>u>>v;
       graph[u].push_back(v);
   }
   memset(st,-1,sizeof st);
  for(int i=0;i<=n;i++)
    if(st[i]==-1)tarzan(i);
  cout<<ns-1<<endl;
  for(int i=0;i<=n;i++)cout<<"scc["<<i<<"]="<<scc[i]<<endl;
    return 0;
}

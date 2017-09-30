#include<bits/stdc++.h>
using namespace std;
const int N=5005;
vector<int>graph[N],cost[N];
int dis[N];
struct data
{
    int nd,cs;
    data(int x,int y){nd=x;cs=y;}
    bool operator <(const data &p)const
    {
        return cs>p.cs;
    }
};
int diastra(int s,int d)
{
   priority_queue<data>q;
   memset(dis,63,sizeof dis);
   dis[s]=0;
   q.push(data(s,dis[s]));
   while(!q.empty())
   {
       data tu=q.top();q.pop();
       int u=tu.nd;
       if(u==d)return tu.cs;
       for(int i=0;i<graph[u].size();i++)
       {
           int v=graph[u][i];
           int c=max(dis[u],cost[u][i]);
           if(dis[v]>c)
           {
               //dis[v]=dis[u]+cost[u][i];
               dis[v]=c;
               q.push(data(v,dis[v]));
           }
       }
   }
   return -1;
}
int main()
{
  int tc,t=1;
  cin>>tc;
  while(tc--)
  {
      for(int i=0;i<N;i++)graph[i].clear();
      for(int i=0;i<N;i++)cost[i].clear();
      int n,r;
      cin>>n>>r;
      for(int i=0;i<r;i++)
      {
          int x,y,cs;
          cin>>x>>y>>cs;
          graph[x].push_back(y);
          graph[y].push_back(x);
          cost[x].push_back(cs);
          cost[y].push_back(cs);
      }
      int s;
      cin>>s;
      cout<<"Case "<<t<<":"<<endl;
      for(int i=0;i<n;i++)
        {
        int f=diastra(i,s);
        if(f==-1)cout<<"Impossible"<<endl;
        else
        cout<<dis[s]<<endl;
      }
      t++;
  }


    return 0;
}

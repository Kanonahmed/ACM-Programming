#include<bits/stdc++.h>
using namespace std;
struct data
{
    int x,y;
    data(int _x,int _y){x=_x;y=_y;}
    bool operator <(const data& p)const
    {
        return y>p.y;
    }
};
priority_queue<data>q;
vector<data>graph[100];
int vis[1005];
int res;
vector<int>h;
int MST()
{
    for(int i=0;i<graph[1].size();i++)q.push(graph[1][i]);
    vis[1]=1;
    while(!q.empty())
    {
        data u=q.top();q.pop();
        if(!vis[u.x]){res+=u.y;h.push_back(u.x);}
        vis[u.x]=1;
        for(int i=0;i<graph[u.x].size();i++)
        {
            data vv=graph[u.x][i];
            if(!vis[vv.x])q.push(vv);
        }
    }
    return res;
}
int main()
{
    int nd,ed;
    cin>>nd>>ed;
     for(int i=1;i<=ed;i++)
     {
         int px,py,pw;
         cin>>px>>py>>pw;
          graph[px].push_back(data(py,pw));
          graph[py].push_back(data(px,pw));
     }
  cout<<MST()<<endl;
  for(int i=0;i<h.size();i++)cout<<h[i]<<" ";
    return 0;
}

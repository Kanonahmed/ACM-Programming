#include<bits/stdc++.h>
using namespace std;
struct data
{
    int x,y,w;
    data(int _x,int _y,int _w){x=_x;y=_y;w=_w;}
    bool operator <(const data& p)const
    {
        return w<p.w;
    }
};
vector<data>graph;
int per[10000];
int n,m;
int find(int x)
{
    if(per[x]==x)return x;
    else return per[x]=find(per[x]);
}
 int MST_K()
 {
     sort(graph.begin(),graph.end());
     //for(int i=0;i<graph.size();i++)cout<<graph[i].x<<" "<<graph[i].y<<" "<<graph[i].w<<endl;
     int cnt=0;
     int res=0;
     for(int i=0;i<graph.size();i++)
     {
         int u=find(graph[i].x);
         int v=find(graph[i].y);
         if(u!=v)
         {
          per[u]=v;
          res+=graph[i].w;
          cnt++;
          if(cnt==n-1)break;
         }
     }
     return res;
 }
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)per[i]=i;
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        graph.push_back(data(u,v,w));
    }
   cout<<MST_K()<<endl;
}

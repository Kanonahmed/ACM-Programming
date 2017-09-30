#include<bits/stdc++.h>
using namespace std;
int f[1000],g[1000],n,r,diameter;
vector<int>graph[1000];
void go(int v,int p)
{
    vector<int>fvlue;
    for(int i=0;i<graph[v].size();i++)
    {
        int u=graph[v][i];
        if(u==p)continue;
        go(u,v);
        fvlue.push_back(f[u]);
    }
    sort(fvlue.begin(),fvlue.end());
    f[v]=1;
    if(fvlue.size())f[v]+=fvlue.back();
    if(fvlue.size()>=2)g[v]=fvlue.back()+1+fvlue[fvlue.size()-2];
    diameter=max(diameter,max(f[v],g[v]));
}
int main()
{
   cin>>n>>r;
  for(int i=0;i<r;i++)
  {
      int x,y;
      cin>>x>>y;
      graph[x].push_back(y);
      graph[y].push_back(x);
  }
  go(1,0);
  cout<<diameter<<endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
vector<int>graph[10005],v;
map<string,int>mp;
queue<int>q;
int deg[10005],k;
int topological_sort()
{
    while(!q.empty())
    {
        int u=q.front();q.pop();
        v.push_back(u);
        for(int i=0;i<graph[u].size();i++)
        {
            int v=graph[u][i];
            deg[v]--;
            if(!deg[v])q.push(v);
        }

    }
    if(v.size()!=k)return 0;
    else return 1;
}
int main()
{
  int tc,t;
  cin>>tc;
  t=1;
  while(tc--)
  {
      int n;
      cin>>n;
       k=0;
       mp.clear();
       v.clear();
       memset(deg,0,sizeof deg);
      for(int i=0;i<n;i++)
      {
          string x,y;
          cin>>x>>y;
          if(mp.find(x)==mp.end())mp[x]=k++;
          if(mp.find(y)==mp.end())mp[y]=k++;
          graph[mp[x]].push_back(mp[y]);
          deg[mp[y]]++;
      }
      for(int i=0;i<k;i++)
        if(!deg[i])q.push(i);
        int res=topological_sort();
        if(res)cout<<"Case "<<t<<": Yes"<<endl;
        else cout<<"Case "<<t<<": No"<<endl;
        t++;
        for(int i=0;i<10005;i++)graph[i].clear();
  }

    return 0;
}

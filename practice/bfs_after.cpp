#include<bits/stdc++.h>
using namespace std;
int e,vis[100];
vector<int>cel[100];
void dfs(int src)
{
 if(vis[src])return ;
 vis[src]=1;
 for(int i=0;i<cel[src].size();i++)
 {
     int v=cel[src][i];
     if(!vis[v]) dfs(v);
 }
}
int main()
{
    cin>>e;
for(int i=0;i<e;i++)
{
    int x,y;
    cin>>x>>y;
    cel[x].push_back(y);
}
int t,tw;
cin>>t>>tw;
dfs(t);
if(vis[tw])cout<<"yes"<<endl;
else cout<<"no"<<endl;

    return 0;
}

#include<bits/stdc++.h>
#define N 101
using namespace std;
vector<int>graph[N];
stack<int>store;
int vis[N];
void dfs(int src){
 if(vis[src])return;
 vis[src]=1;
 for(int i=0;i<graph[src].size();i++){
    int v=graph[src][i];
    dfs(v);
 }
  store.push(src);
}
int main()
{
  int n,m;
  while(cin>>n>>m){
    if(!n&&!m)break;
    for(int i=0;i<N;i++){graph[i].clear();}
    memset(vis,0,sizeof vis);
    for(int i=0;i<m;i++){

        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
    }
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])dfs(i);
    }
    while(!store.empty()){
        cout<<store.top()<<" ";
        store.pop();
    }
    cout<<endl;
  }


    return 0;
}

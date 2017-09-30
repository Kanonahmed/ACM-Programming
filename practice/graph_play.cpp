#include<bits/stdc++.h>
using namespace std;
vector<int> edge[1000];
vector<int> cost[1000];
vector<int>n;
int vis[1000],k;
int e,nn;
int dfs(int f)
{
    if(vis[f]) return 0;
    vis[f]=1;
    n.push_back(f);
    for(int i=0; i<edge[f].size(); i++)
    {
        int y=edge[f][i];
        if(!vis[y]) dfs(y);
    }
}
int main()
{
    cin>>nn>>e;
    for(int i=0; i<e; i++)
    {
        int x,y;
        cin>>x>>y;
        edge[x].push_back(y);
    }

    int st,end,flag=0;
    cin>>st>>end;
    dfs(st);
    for(int i=0; i<n.size(); i++)
    {
        if(end==n[i])
        {
            cout<<"yes"<<endl;
            flag=1;
            break ;
        }
        cout<<n[i]<<" ";
    }
    if(!flag)
        cout<<"no "<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
const int N=101;
vector<int>graph[N],ans;
int ind[N],n,m;
void topological_sort()
{
    queue<int>q;
    for(int i=1; i<=n; i++)
    {
        if(!ind[i])q.push(i);
    }
    while(!q.empty())
    {

        int u=q.front();
        q.pop();
        if(!ind[u])ans.push_back(u);
        for(int i=0; i<graph[u].size(); i++)
        {
            int v=graph[u][i];
            ind[v]--;
            if(!ind[v])q.push(v);
        }
    }
}
int main()
{
    while(cin>>n>>m)
    {
        for(int i=0; i<N; i++)graph[i].clear();
        memset(ind,0,sizeof ind);
        ans.clear();
        if(!n&&!m)break;
        for(int i=0; i<m; i++)
        {
            int x,y;
            cin>>x>>y;
            graph[x].push_back(y);
            ind[y]++;
        }
        topological_sort();
        for(int i=0; i<ans.size(); i++)cout<<ans[i]<<" ";
        cout<<endl;
    }


    return 0;
}

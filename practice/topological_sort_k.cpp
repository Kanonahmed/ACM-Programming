#include<bits/stdc++.h>
#define N 10002
using namespace std;
vector<int>graph[N],ans;
int ind[N],n,m;
int topological_sort()
{
    priority_queue<int>q;
    for(int i=1; i<=n; i++)
    {
        if(!ind[i])q.push(-i);
    }
    while(!q.empty())
    {
        int u=-1*q.top();
        q.pop();
       ans.push_back(u);
        for(int i=0; i<graph[u].size(); i++)
        {
            int v=graph[u][i];
            ind[v]--;
            if(!ind[v])q.push(-v);
        }
    }
    int s=ans.size();
    if(s==n)return 1;
    else return 0;
}
int main()
{
    while(scanf("%d %d",&n,&m)==2)
    {
        for(int i=0; i<N; i++)graph[i].clear();
        memset(ind,0,sizeof ind);
        ans.clear();
        for(int i=0; i<m; i++)
        {
            int x,y;
            scanf("%d %d",&x,&y);
            graph[x].push_back(y);
            ind[y]++;
        }
        int t=topological_sort();
        if(t)for(int i=0; i<ans.size(); i++)printf("%d ",ans[i]);
        else printf("Sandro fails.");
        cout<<endl;
    }


    return 0;
}

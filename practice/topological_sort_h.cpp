#include<bits/stdc++.h>
using namespace std;
const int N=105;
vector<int>graph[N],store;
priority_queue<int>q;
int ind[N],n,m;
void topological_sort()
{
    while(!q.empty()){
        int u=-1*q.top();q.pop();
        store.push_back(u);
        for(int i=0;i<graph[u].size();i++){
            int v=graph[u][i];
            ind[v]--;
            if(!ind[v])q.push(-v);
        }
    }
}
int main()
{
    while(cin>>n>>m)
    {
        for(int i=0;i<N;i++)graph[i].clear();
        memset(ind,0,sizeof ind);
        store.clear();
        for(int i=0; i<m; i++)
        {
            int y,k;
            cin>>y>>k;
            for(int i=0; i<k; i++)
            {
                int x;
                cin>>x;
                graph[x].push_back(y);
                ind[y]++;
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(!ind[i])q.push(-i);
        }
       topological_sort();
       for(int i=0;i<store.size();i++)cout<<store[i]<<" ";
       cout<<endl;
    }

    return 0;
}


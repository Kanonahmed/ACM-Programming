#include<bits/stdc++.h>
#define N 200
using namespace std;
vector<int>graph[N+5];
vector<string>store;
map<string,int>mp;
map<int ,string>mp1;
int ind[N+5],n;
void topological_sort()
{
    priority_queue<int>q;
    for(int i=1;i<=n;i++)
    {
        if(!ind[i])q.push(-i);
    }
    while(!q.empty()){
        int u=-1*q.top();q.pop();
        store.push_back(mp1[u]);
        for(int i=0;i<graph[u].size();i++)
        {
            int v=graph[u][i];
            ind[v]--;
            if(!ind[v])q.push(-v);
        }
    }
}
int main()
{
    int t=1;
    while(cin>>n)
    {
        for(int i=0;i<N+5;i++)graph[i].clear();
        memset(ind,0,sizeof ind);
        store.clear();
        mp.clear();
        mp1.clear();
        for(int i=1; i<=n; i++)
        {
            string s;
            cin>>s;
            mp[s]=i;
            mp1[i]=s;
        }
        int m;
        cin>>m;
        for(int i=0; i<m; i++)
        {
            string b,bb;
            cin>>b>>bb;
            graph[mp[b]].push_back(mp[bb]);
            ind[mp[bb]]++;
        }
        topological_sort();
        cout<<"Case #"<<t<<": Dilbert should drink beverages in this order:";
        for(int i=0;i<store.size();i++)cout<<" "<<store[i];
        cout<<"."<<endl<<endl;
        t++;
    }

    return 0;
}

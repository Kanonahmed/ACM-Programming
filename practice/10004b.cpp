#include<bits/stdc++.h>
using namespace std;
vector<int>v[202];
int clr[201];
int bfs(int src)
{
    memset(clr,-1,sizeof clr);
    queue<int>q;
    clr[src]=1;
    q.push(src);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0; i<v[u].size(); i++)
        {
            int nw=v[u][i];
            if(clr[nw]==-1)
            {
                clr[nw]=1-clr[u];
                q.push(nw);
            }
            else if(clr[nw]==clr[u])return 1;
        }

    }
    return 0;
}
int main()
{
    int e,st,n;
    while(cin>>n&&n)
    {
        for(int i=0; i<201; i++)v[i].clear();
        cin>>e;
        for(int i=0; i<e; i++)
        {
            int x,y;
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
            st=y;
        }
        int t=bfs(st);
        if(t==1)cout<<"NOT BICOLORABLE."<<endl;
        else cout<<"BICOLORABLE."<<endl;
    }
    return 0;
}

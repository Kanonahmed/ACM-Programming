#include<bits/stdc++.h>
using namespace std;
int parent[30002];
int num[30002];
int find(int x)
{
   if(parent[x]==x)return x;
   else return parent[x]=find(parent[x]);
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m;
        cin>>n>>m;
        for(int j=1;j<=n;j++){parent[j]=j;num[j]=1;}
        int len=1;
        for(int i=0; i<m; i++)
        {
            int a,b;
            cin>>a>>b;
            int u=find(a);
            int v=find(b);
            if(u!=v){parent[v]=u;num[u]+=num[v];if(len<num[u])len=num[u];}
        }
        memset(num,0,sizeof num);
     cout<<len<<endl;
    }


    return 0;
}

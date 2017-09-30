#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
int parent[200012];
int con[200012];
int check(int x)
{
    if(parent[x]==x)return x;
    else return parent[x]=check(parent[x]);
}
int main()
{
  int tc;
  cin>>tc;
  while(tc--){
    int n;
    cin>>n;
    for(int j=0;j<=2*n;j++){parent[j]=j;con[j]=1;}
    int k=1;
    for(int i=0;i<n;i++)
    {
        string a,b;
        cin>>a>>b;
        if(mp.find(a)==mp.end())mp[a]=k++;
        if(mp.find(b)==mp.end())mp[b]=k++;
        int u=check(mp[a]);
        int v=check(mp[b]);
        if(u!=v){parent[v]=u;con[u]+=con[v];}
        cout<<con[u]<<endl;
    }
    mp.clear();
    memset(con,0,sizeof con);
    memset(parent,0,sizeof parent);
  }


    return 0;
}

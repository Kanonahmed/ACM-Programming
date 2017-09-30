#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
int par[5005];
int con[5005];
int find(int p){
  if(par[p]==p)return p;
  else return par[p]=find(par[p]);
}
int main()
{
  int c,r;
  while(cin>>c>>r){

    if(!c&&!r)break;
    for(int i=1;i<=c;i++)
    {
        string x;
        cin>>x;
        if(mp.find(x)==mp.end())mp[x]=i,par[mp[x]]=mp[x],con[mp[x]]=1;
    }
    int len=1;
    for(int i=0;i<r;i++)
    {
        string a,b;
        cin>>a>>b;
        int u=find(mp[a]);
        int v=find(mp[b]);
        if(u!=v){par[v]=u;con[u]+=con[v];if(len<con[u])len=con[u];}
    }
    cout<<len<<endl;
    mp.clear();
    memset(con,0,sizeof con);
    memset(par,0,sizeof par);
  }


    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int taka[10005];
int par[10005];
int find(int v){
 if(par[v]==v)return v;
 else return par[v]=find(par[v]);
}
 int main()
 {
    int tc;
    cin>>tc;
    while(tc--){

        int m,f;
        cin>>m>>f;
        for(int i=0;i<m;i++)cin>>taka[i];
        for(int i=0;i<m;i++)par[i]=i;
        for(int i=0;i<f;i++)
        {
            int x,y;
            cin>>x>>y;
            int u=find(x);
            int v=find(y);
            if(u!=v){par[v]=u;taka[u]+=taka[v];taka[v]=0;}
        }
        bool flag=true;
        for(int i=0;i<m;i++)
        {
            if(taka[i]){flag=false;break;}
        }
        if(flag==true)cout<<"POSSIBLE"<<endl;
        else cout<<"IMPOSSIBLE"<<endl;
        memset(par,0,sizeof par);
        memset(taka,0,sizeof taka);
    }


     return 0;
 }

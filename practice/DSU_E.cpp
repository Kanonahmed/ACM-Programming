#include<bits/stdc++.h>
using namespace std;
int par[20002];
int find(int v){
  if(par[v]==v)return v;
  else return par[v]=find(par[v]);
}
int main()
{
   int m;
   cin>>m;
   for(int i=0;i<=2*m;i++)par[i]=i;
   int c,x,y;
   while(cin>>c>>x>>y){
    if(!c&&!x&&!y) break;
    int u=find(x);
    int v=find(x+m);
    int a=find(y);
    int b=find(y+m);
    if(c==1)
    {
        if(u==b || v==a)cout<<"-1"<<endl;
        else
        {
            par[a]=u;
            par[b]=v;
        }
    }
    else if(c==2)
    {
        if(u==a||v==b)cout<<"-1"<<endl;
        else
        {
            par[b]=u;
            par[a]=v;
        }
    }
    else if(c==3)
    {
        if(u==a||v==b)cout<<"1"<<endl;
        else cout<<"0"<<endl;

    }
    else
    {
        if(u==b||v==a)cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }

   }


    return 0;
}

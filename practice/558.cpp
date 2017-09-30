#include<bits/stdc++.h>
using namespace std;
int n,m,x[2002],y[2002],cst[2002];
int bell_ford(int n,int m)
{
    int dis[1005];
    memset(dis,63,sizeof dis);
    dis[0]=0;
    int cycle=0;
    for(int stp=1; stp<=n; stp++)
    {
        int check=0;
        for(int i=1;i<=m; i++)
        {
            int u=x[i],v=y[i];
            if(dis[v]>(dis[u]+cst[i]))
            {
                dis[v]=dis[u]+cst[i];
                if(stp==n)cycle=1;
                check=1;
            }
        }
        if(!check)break;
    }
    if(cycle)return 1;
    else return 0;
}
int main()
{
   int tc;
   cin>>tc;
   while(tc--)
   {
       memset(x,0,sizeof x);
       memset(y,0,sizeof y);
       memset(cst,0,sizeof cst);
       cin>>n>>m;
       for(int i=1;i<=m;i++)
        cin>>x[i]>>y[i]>>cst[i];
       int f=bell_ford(n,m);
       if(f)cout<<"possible"<<endl;
       else cout<<"not possible"<<endl;
   }



    return 0;
}

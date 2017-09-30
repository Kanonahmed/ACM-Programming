#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
   int nod,eg;
   int dis[105],x[105],y[105],cs[105];
   memset(dis,63,sizeof dis);
   dis[1]=0;
   cin>>nod>>eg;
   for(int i=1;i<=eg;i++)
   {
       cin>>x[i]>>y[i]>>cs[i];
   }
    //bell ford
     int cycle=0;
    for(int step=1;step<=nod;step++)
    {
        int check=0;
        for(int j=1;j<=eg;j++)
        {
            int u=x[j],v=y[j];
            if(dis[v]>dis[u]+cs[j])
            {
                dis[v]=dis[u]+cs[j];
                if(step==nod)cycle=1;
                check=1;
            }
        }
        if(!check)break;
    }
    // end
    if(cycle)cout<<"negative cycle"<<endl;
    else
    {
        for(int i=1;i<=nod;i++)
        cout<<dis[i]<<" ";
    }
    return 0;
}

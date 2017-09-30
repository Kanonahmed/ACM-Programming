#include<bits/stdc++.h>
using namespace std;
int par[1005];
struct data
{
    float x,y;
};
data ar[1005];
int find(int v){
 if(par[v]==v)return v;
 else return par[v]=find(par[v]);
}
int main()
{
    int tc,t=1;
    cin>>tc;
    while(tc--)
    {

        int n;
        double d;
        cin>>n>>d;
        for(int i=1; i<=n; i++)
        {
            cin>>ar[i].x>>ar[i].y;
        }

        for(int i=1;i<=n;i++)par[i]=i;
        int res=n;
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                double dd=(ar[i].x-ar[j].x)*(ar[i].x-ar[j].x)+(ar[i].y-ar[j].y)*(ar[i].y-ar[j].y);
                if((d*d)>=dd)
                {
                    int u=find(i);
                    int v=find(j);
                    if(u!=v){par[v]=u;res--;}
                }
            }
        }
        cout<<"Case "<<t<<": "<<res<<endl;
        memset(par,0,sizeof par);
        memset(ar,0,sizeof ar);
        t++;
    }

    return 0;
}

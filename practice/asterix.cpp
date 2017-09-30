#include<bits/stdc++.h>
using namespace std;
int c,r,qr;
int dis[100][100],cary[100][100],fest[100];
void f_warshal()
{
    for(int k=1; k<=c; k++)
        for(int i=1; i<=c; i++)
            for(int j=1; j<=c; j++)
                if(dis[i][j]+cary[i][j]>dis[i][k]+dis[k][j]+max(cary[i][k],cary[k][j]))
                {
                    dis[i][j]=dis[i][k]+dis[k][j];
                    //cary[i][j]=max(max(fest[i],fest[k]),fest[j]);
                    cary[i][j]=max(cary[i][k],cary[k][j]);
                }
}
int main()
{
    int tc=1;
    while(cin>>c>>r>>qr){
            if(!c&&!r&&!qr)break;
    memset(cary,0,sizeof cary);
    memset(fest,0,sizeof fest);
    memset(dis,63,sizeof dis);
    int inf=dis[0][0];
    for(int i=1; i<=c; i++)
    {
        cin>>fest[i];
        dis[i][i]=0;
    }
    for(int i=1;i<=c;i++)
    {
        for(int j=1;j<=c;j++)
            cary[i][j]=max(fest[i],fest[j]);
    }
    for(int i=1; i<=r; i++)
    {
        int x,y,cost;
        cin>>x>>y>>cost;
        dis[x][y]=cost;
        dis[y][x]=cost;
        cary[x][y]=cary[y][x]=max(fest[x],fest[y]);
    }
    f_warshal();
    if(tc>1)cout<<endl;
    cout<<"Case "<<tc<<"#"<<endl;
    for(int i=1; i<=qr; i++)
    {
        int src,tr;
        cin>>src>>tr;
        if(dis[src][tr]>=inf)cout<<"-1"<<endl;
        else cout<<dis[src][tr]+cary[src][tr]<<endl;
    }
           tc++;
    }
    return 0;
}

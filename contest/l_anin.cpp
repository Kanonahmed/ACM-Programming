#include<bits/stdc++.h>
using namespace std;
int dis[105][105];
int n,edge;
void floyd_wrsal(int n)
{
    for(int k=0;k<n;k++)
        for(int i=0;i<n;i++)
           for(int j=0;j<n;j++)
             dis[i][j]=min(dis[i][j],dis[i][k]+dis[k][j]);
}
int main()
{
   int tc,t=1;
   cin>>tc;
   while(tc--)
   {
    cin>>n>>edge;
    memset(dis,63,sizeof dis);
    for(int i=0;i<n;i++)dis[i][i]=0;
    for(int i=0;i<edge;i++)
    {
        int x,y;
        cin>>x>>y;
        dis[x][y]=1;
        dis[y][x]=1;
    }
    floyd_wrsal(n);

    int s,d,sum=0;
    cin>>s>>d;
    for(int i=0;i<n;i++)
        sum=max(sum,dis[s][i]+dis[i][d]);
    cout<<"Case "<<t++<<": "<<sum<<endl;

   }



    return 0;
}

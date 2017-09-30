#include<bits/stdc++.h>
#define EARTH_RADIUS 6378.00
#define RADIANS(x) (((1.0 * x * PI) / 180.0))
#define PI acos(-1.0)
using namespace std;
int n,m,qr,k;
map<string ,int >mp;
double ax[110],ay[110];
int dis[102][102];
double distance(double p1_x,double p1_y,double p2_x,double p2_y)
{
    return acos( sin(p1_x) * sin(p2_x) +
                 cos(p1_x) * cos(p2_x) *
                 cos(p2_y - p1_y) ) * EARTH_RADIUS;
}
void f_warshal()
{
    for(int c=1; c<=k; c++)
        for(int i=1; i<=k; i++)
            for(int j=1; j<=k; j++)
                if(dis[i][j]>dis[i][c]+dis[c][j])
                    dis[i][j]=dis[i][c]+dis[c][j];
}
int main()
{
    int tc=1;
    while(cin>>n>>m>>qr)
    {
        if(!n&&!m&&!qr)break;
        k=0;
        mp.clear();
        memset(ax,0,sizeof ax);
        memset(ay,0,sizeof ay);
        for(int i=0; i<n; i++)
        {
            string ss;
            double xx,yy;
            cin>>ss>>xx>>yy;
            if(mp[ss]==0)mp[ss]=++k;
            ax[mp[ss]]=xx;
            ay[mp[ss]]=yy;
        }
        for(int i=0; i<101; i++)
        {
            for(int j=0; j<101; j++)
            {
                if(i==j)dis[i][j]=0;
                else dis[i][j]=1000000000;
            }
        }
        for(int i=0; i<m; i++)

        {
            string fx,fy;
            cin>>fx>>fy;

            double p1_lat=RADIANS(ax[mp[fx]]);
            double p2_lat=RADIANS(ax[mp[fy]]);
            double p1_long=RADIANS(ay[mp[fx]]);
            double p2_long=RADIANS(ay[mp[fy]]);
            double h=distance(p1_lat,p1_long,p2_lat,p2_long);
            int h1=round(h);
            dis[mp[fx]][mp[fy]]=h1;
        }
        f_warshal();
        if(tc>1)cout<<endl;
        cout<<"Case #"<<tc<<endl;
        for(int i=0; i<qr; i++)
        {
            string src,tr;
            cin>>src>>tr;
            if(dis[mp[src]][mp[tr]]>=1000000000)cout<<"no route exists"<<endl;
            else cout<<dis[mp[src]][mp[tr]]<<" km"<<endl;
        }
        tc++;
    }
    return 0;
}


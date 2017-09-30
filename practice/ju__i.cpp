#include<bits/stdc++.h>
using namespace std;
int cell[1000][1000];
int mx,mix,my,miy;
void color(int x,int y,int r)
{
    for(int i=1;i<=r;i++)
    {
        int rr=x+i;
        if(rr<=mx)cell[rr][y]=1;
    }
    for(int i=1;i<=r;i++)
    {
        int rr=x-i;
        if(rr>=mix)cell[rr][y]=1;
    }
    for(int i=1;i<=r;i++)
    {
        int cc=y+i;
        if(cc<=my)cell[x][cc]=1;
    }
    for(int i=1;i<=r;i++)
    {
        int cc=y-i;
        if(cc>=miy)cell[x][cc]=1;
    }
    for(int i=1;i<r;i++)
    {
        int xx=x+i;
        int cc=y+i;
        if(xx<=mx&&cc<=my)
        cell[cc][xx]=1;
    }
    for(int i=1;i<r;i++)
    {
        int xx=x-i;
        int cc=y-i;
        if(xx>=mix&&cc>=miy)
        cell[cc][xx]=1;
    }
    for(int i=1;i<r;i++)
    {
        int xx=x-i;
        int cc=y+i;
        if(xx>=mix&&cc<=my)
        cell[cc][xx]=1;
    }
    for(int i=1;i<r;i++)
    {
        int xx=x-i;
        int cc=y+i;
        if(xx>=mix&&cc<=my)
        cell[cc][xx]=1;
    }
}
int main()
{
    int r,c,r1,c1;
    cin>>r>>c>>r1>>c1;
    mx=max(c,c1);
    mix=min(c,c1);
    my=max(r,r1);
    miy=min(r,r1);
    int l,m,n;
    cin>>l>>m>>n;
    color(l,m,n);
    int cnt=0;
    for(int i=miy;i<=my;i++)
    {
        for(int j=mix;j<=mx;j++)
        {
            if(cell[i][j]!=1)cnt++;
        }
    }
cout<<cnt<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int vis[100][100],r,c;
string s[100][100];
void fill(int x,int y)
{
    if(x>=1&&x<=r&&y>=1&&y<=c&&vis[x][y]!=1)
    {
        if(s[x][y]=="*")
        {
            vis[x][y]=1;
            fill(x+1,y);
            fill(x-1,y);
            fill(x,y+1);
            fill(x,y-1);
        }
    }

    else return ;
}
int main()
{
    int count;
    cin>>r>>c;
    for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=c; j++)
            cin>>s[i][j];
    }
    count=0;
    for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=c; j++)
        {
            if(vis[i][j]==0&&s[i][j]=="*")
            {
                count++;
                fill(i,j);
            }
        }
    }
    cout<<count<<endl;
    return 0;
}

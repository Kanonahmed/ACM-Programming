#include<bits/stdc++.h>
using namespace std;
int vis[10][10];
void go(int x,int y)
{

    if(vis[x][y])return ;
    vis[x][y]=1;
    cout<<x<<" "<<y<<endl;
    getchar();
    if(x<=0||x>5||y<=0||y>5)return ;
            go(x,y+1);
            go(x+1,y);
            go(x,y-1);
            go(x-1,y);
            cout<<"porer="<<x<<" "<<y<<endl;
}
int main()
{
   go(1,1);



    return 0;
}

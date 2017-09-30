#include<bits/stdc++.h>
using namespace std;
int cell[1005][1005];
int main()
{
    int r,c,k,m=0;
    cin>>r>>c>>k;
    for(int i=1; i<=k; i++)
    {
        int x,y;
        cin>>x>>y;
        cell[x][y]=1;
        if(cell[x][y+1]==1&&cell[x+1][y]==1&&cell[x+1][y+1]==1) m=i;
        if(cell[x][y-1]==1&&cell[x+1][y]==1&&cell[x+1][y-1]==1)m=i;
        if(cell[x-1][y]==1&&cell[x][y+1]==1&&cell[x-1][y+1]==1)m=i;
        if(cell[x-1][y]==1&&cell[x][y-1]==1&&cell[x-1][y-1]==1)m=i;
        if(m!=0)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<"0"<<endl;
    return 0;
}

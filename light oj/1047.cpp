#include<bits/stdc++.h>
using namespace std;
int color[22][3];
int n,DP[22][3];
const int inf=100000;
int make(int row,int cc)
{
    if(row>=n) return 0;
    if(DP[row][cc]!=-1) return DP[row][cc];
    int res=inf;
    for(int i=1; i<=3; i++){
        if(i!=cc) res=min(res, make(row+1, i)+color[row][i-1]);
    }
    return DP[row][cc]=res;
}
int main()
{
    int tc,kes=1;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
        {
            int x,y,z;
            cin>>x>>y>>z;
            color[i][0]=x;
            color[i][1]=y;
            color[i][2]=z;
        }
        memset(DP,-1,sizeof DP);
        int ans=make(0,0);
        cout<<"Case "<<kes<<": "<<ans<<endl;
        kes++;
    }
    return 0;
}

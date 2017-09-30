#include<bits/stdc++.h>
using namespace std;
struct data
{
    int x,y;
    data(int _x,int _y)
    {
        x=_x;
        y=_y;
    }
    bool operator<(const data &ptr)const
    {
        return x<ptr.x;
    }
};
vector<data>v[2];
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x,y;
        cin>>x>>y;
        if(x<0)v[0].push_back(data(x,y));
        else v[1].push_back(data(x,y));
    }
    sort(v[0].begin(),v[0].end());
    sort(v[1].begin(),v[1].end());

    int res=0;
    int j=v[0].size()-1;
    int mx=min(v[0].size(),v[1].size());
    for(int i=0; i<mx; i++,j--)
    {
        res+=v[1][i].y+v[0][j].y;
    }

    if(mx<v[0].size())res+=v[0][j].y;
    else if(mx<v[1].size())res+=v[1][mx].y;
    cout<<res<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int ___x1, ___y1, ___x2, ___y2;
int vis[1005][1005];
map<pair<int, int>, int>mp;

double dis(int a, int b, int aa, int bb){
    int x=(a-aa);
    x*=x;
    int y=(b-bb);
    y*=y;
    return sqrt(x+y);
}

void dfs(int x, int y, double z){
    mp[make_pair(x, y)]++;
    if(dis(x, y, x+1, y)<=z && !mp[make_pair(x+1, y)]) dfs(x+1, y, z-dis(x, y, x+1, y));
    if(dis(x, y, x, y+1)<=z  && !mp[make_pair(x, y+1)]) dfs(x, y+1, z-dis(x, y, x, y+1));
    if(dis(x, y, x-1, y)<=z  && !mp[make_pair(x-1, y)]) dfs(x-1, y, z-dis(x, y, x-1, y));
    if(dis(x, y, x, y-1)<=z  && !mp[make_pair(x, y-1)]) dfs(x, y-1, z-dis(x, y, x, y-1));
    if(dis(x, y, x+1, y+1)<=z  && !mp[make_pair(x+1, y+1)]) dfs(x+1, y+1, z-dis(x, y, x+1, y+1));
    if(dis(x, y, x+1, y-1)<=z  && !mp[make_pair(x+1, y-1)]) dfs(x+1, y-1, z-dis(x, y, x+1, y-1));
    if(dis(x, y, x-1, y+1)<=z  && !mp[make_pair(x-1, y+1)]) dfs(x-1, y+1, z-dis(x, y, x-1, y+1));
    if(dis(x, y, x-1, y-1)<=z  && !mp[make_pair(x-1, y-1)]) dfs(x-1, y-1, z-dis(x, y, x-1, y-1));
}

int main(){
    cout<<dis(1, 3, 2, 5)<<endl;
    int ax, ay, bx, by;
    cin>>ax>>ay>>bx>>by;
    ___x1=min(ax, bx);
    ___x2=max(ax, bx);
    ___y1=min(ay, by);
    ___y2=max(ay, by);
    int tc;
    cin>>tc;
    while(tc--){
        int a, b, c;
        cin>>a>>b>>c;
        dfs(a, b, c);
    }
    int cnt=0;
    for(int i=___x1; i<=___x2; i++){
        for(int j=___y1; j<=___y2; j++){
            if(!mp[make_pair(i, j)]){
                cnt++;
                cout<<i<<" "<<j<<endl;
            }
        }
    }
    cout<<cnt<<endl;
}

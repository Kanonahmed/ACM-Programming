#include<bits/stdc++.h>
using namespace std;

double dis(int a, int b, int aa, int bb){
    int x=(a-aa);
    x*=x;
    int y=(b-bb);
    y*=y;
    return sqrt(x+y);
}

int main(){
    int ax, ay, bx, by;
    cin>>ax>>ay>>bx>>by;
    int x1=min(ax, bx);
    int x2=max(ax, bx);
    int y1=min(ay, by);
    int y2=max(ay, by);
    int tc;
    cin>>tc;
    map<pair<int, int>, int>mp;
    while(tc--){
        int a, b, c;
        cin>>a>>b>>c;
        for(int i=y1; i<=y2; i++){
            if(dis(a, b, x1, i)<=c)
                mp[make_pair(x1, i)]++;
        }
        for(int i=y1; i<=y2; i++){
            if(dis(a, b, x2, i)<=c)
                mp[make_pair(x2, i)]++;
        }
        for(int i=x1; i<=x2; i++){
            if(dis(a, b, i, y1)<=c)
                mp[make_pair(i, y1)]++;
        }
        for(int i=x1; i<=x2; i++){
            if(dis(a, b, i, y2)<=c)
                mp[make_pair(i, y2)]++;
        }
    }
    int cnt=0;
    for(int i=x1; i<=x2; i++){
        for(int j=y1; j<=y2; j++){
            if(i>x1 && i<x2 && j>y1 && j<y2);
            else{
                if(!mp[make_pair(i, j)]){
//                    cout<<i<<" "<<j<<endl;
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}

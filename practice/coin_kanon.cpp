#include<bits/stdc++.h>
using namespace std;

int coin[100];
int n, tk;

int go(int p, int now, string s){
    if(now<0) return 0;
    if(p<0){
        if(!now){
            cout<<s<<endl;
            return 1;
        }
        else return 0;
    }
    return go(p, now-coin[p], s+char(coin[p]+'0')) + go(p-1, now, s);
}

int main(){
    cin>>n>>tk;
    for(int i=0; i<n; i++) cin>>coin[i];
    cout<<go(n-1, tk, "")<<endl;
}

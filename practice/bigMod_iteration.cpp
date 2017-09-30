#include<bits/stdc++.h>
using namespace std;

int bigMod(int b, int p, int m){
    int res=1;
    while(p){
        if(p%2==1) res=((res%m) * (b%m))%m;
        b=((b%m)*(b%m))%m;
        p/=2;
    }
    return res;
}

int main(){
    int b, p, m;
    cin>>b>>p>>m;
    cout<<bigMod(b, p, m)<<endl;
    return 0;
}

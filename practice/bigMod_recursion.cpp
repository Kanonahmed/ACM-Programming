#include<bits/stdc++.h>
using namespace std;

int sqr(int x){
    return x*x;
}

int bigMod(int b, int p, int m){
    if(p==1) return b%m;
    else if(p%2==0) return sqr(bigMod(b, p/2, m)%m)%m;
    else return ((b%m)*bigMod(b, p-1, m)%m)%m;
}

int main(){
    int b, p, m;
    cin>>b>>p>>m;
    cout<<bigMod(b, p, m)<<endl;
    return 0;
}

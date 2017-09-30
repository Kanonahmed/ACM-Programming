#include<bits/stdc++.h>
using namespace std;

int a[]= {1,2,3};
void go(int p, string s){
    //cout<<p<<" ";//<<s<<endl;
    if(p==3){
        //cout<<s<<endl;
        return;
    }
    go(p+1, s+char(a[p]+'0'));
    //cout<<s<<endl;
    go(p+1, s);
    cout<<p<<endl;
}

int main(){
    go(0, "");
    return 0;
}

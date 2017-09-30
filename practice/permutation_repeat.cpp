#include<bits/stdc++.h>
using namespace std;

string t;
int cnt[100];
int tot;

void go(int p, string s){
    if(p==t.size()){
        tot++;
        cout<<s<<endl;
        return;
    }
    for(int i=0; i<26; i++){
        if(cnt[i]){
            cnt[i]--;
            go(p+1, s+char(i+'a'));
            cnt[i]++;
        }
    }
}

int main(){
    cin>>t;
    for(int i=0; i<t.size(); i++){
        cnt[t[i]-'a']++;
    }
    go(0, "");
    cout<<tot<<endl;
}

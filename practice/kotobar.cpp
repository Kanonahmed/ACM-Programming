#include<iostream>
#include<string>
#include<map>
#include<vector>

using namespace std;

int cnt[1000];

int main(){
    string inp;
    getline(cin, inp);
    string tmp="";
    map<string, int>mp;
    vector<string>v;
    int ks=0;
    for(int i=0; i<=inp.size(); i++)
    {
        if(inp[i]>='a' && inp[i]<='z') tmp+=inp[i];
        else{
            if(mp.find(tmp)==mp.end()){
                mp[tmp]=++ks;
                v.push_back(tmp);
            }
            cnt[mp[tmp]]++;
            tmp="";
        }
    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" "<<cnt[mp[v[i]]]<<endl;
    }
    return 0;
}

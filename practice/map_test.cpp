#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    map<int, int>mp;
//    mp[1000]=0;
//    for(;;){
//        int x;
//        cin>>x;
//        if(mp.find(x)!=mp.end()) cout<<"Yes mapped"<<endl;
//        else cout<<"No"<<endl;
//    }
    int ks=0;
    for(int i=0; i<5; i++)
    {
        int x;
        cin>>x;
        if(mp.find(x)==mp.end()) mp[x]=ks++;
        //cout<<mp[x]<<endl;
    }
    map<int,int >::iterator it;
    for(it= mp.begin(); it !=mp.end(); ++it)
        cout<< (*it).first <<" "<< (*it).second <<endl;
    cout<<endl;
    mp.clear();
}

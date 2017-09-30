#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<cstdio>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int cnt[1000];
int main()
{
    string a,temp="",b;
    map<string,int>mp;
    vector<string>ss;
    int i,j,ks;
    getline(cin,a);
    ks=0;
    for(i=0; i<=a.size(); i++)
    {
        if(a[i]>='a'&&a[i]<='z')
            temp+=a[i];
        else if(a[i]>='A'&&a[i]<='Z')
            temp+=a[i];
        else
        {
            if(mp.find(temp)==mp.end())
            {
                mp[temp]=++ks;
                ss.push_back(temp);
            }
//            cnt[ks]++; or
            cnt[mp[temp]]++;
            temp="";
        }
    }
//    for(i=0; i<ss.size(); i++)
//        cout<<ss[i]<<endl;
    getline(cin,b);
    cout<<cnt[mp[b]];



    return 0;
}

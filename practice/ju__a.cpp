#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,string>p[3005];
    vector<pair<string,int> >vv;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>p[i].second>>p[i].first;
    }
    sort(p,p+n);
    for(int i=0;i<n;i++)
    {
        if(i<p[i].first){cout<<"-1"<<endl;return 0;}
        int position=p[i].first;
        vv.insert(vv.begin()+position,make_pair(p[i].second,n-i));
    }
    for(int i=0;i<n;i++)
    cout<<vv[i].first<<" "<<vv[i].second<<endl;
    return 0;
}

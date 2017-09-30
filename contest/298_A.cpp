#include<bits/stdc++.h>
using namespace std;
set<int>s;
vector<int>v,v1;
int vis[5005];
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i+=2)
    {
        s.insert(i);
        v.push_back(i);
        vis[i]=1;
    }
    if(n%2==0){
    reverse(v.begin(),v.end());
    for(int i=n;i>=1;i-=2)
    {
        int h=v[v.size()-1]-i;
        if(h>=2||h<=-2)
        {
            if(!vis[i])
            v.push_back(i);
            s.insert(i);
        }
    }
    cout<<s.size()<<endl;
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";return 0;}
    else
    {

    for(int i=2;i<=n;i+=2)
    {
        int h=v[v.size()-1]-i;
        if(h>=2||h<=-2)
        {
            if(!vis[i])
            v.push_back(i);
            s.insert(i);
        }
    }
    cout<<s.size()<<endl;
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";return 0;
    }
    return 0;
}

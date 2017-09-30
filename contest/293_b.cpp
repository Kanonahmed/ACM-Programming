#include<bits/stdc++.h>
#define pp pair<int ,int>
using namespace std;
int a[1000005];
int b[1000005],k;
int main()
{

int n;
set<pp>s,sp;
map<int ,int >mp;
cin>>n;
for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    if(mp.find(x)==mp.end()){mp[x]=k++;}
    s.insert(make_pair(x,mp[x]));
    a[mp[x]]++;
}
for(int i=0;i<n-1;i++)
{
    int x;
    cin>>x;
    if(mp.find(x)==mp.end()){mp[x]=k++;}
    sp.insert(make_pair(x,mp[x]));
    a[mp[x]]--;
    b[mp[x]]++;
}
set<pp>::iterator ii;
for(ii=s.begin();ii!=s.end();ii++)
{
    if(a[(*ii).second]>0)cout<<(*ii).first<<endl;
}

for(int i=0;i<n-2;i++)
{
    int x;
    cin>>x;
    if(mp.find(x)==mp.end()){mp[x]=k++;}
    b[mp[x]]--;
}
set<pp>::iterator iii;
for(iii=sp.begin();iii!=sp.end();iii++)
{
    if(b[(*iii).second]>0)cout<<(*iii).first<<endl;
}
    return 0;
}

#include<bits/stdc++.h>
#include<string>
#define N 305
using namespace std;
vector<int>graph[N];
queue<int>q;
vector<char>v;
string s,ss;
int ind[N];
int vis[N];
void topological_sort()
{
    if(v.size()==ss.size())
    {
        for(int l=0;l<v.size();l++)cout<<v[l];
        cout<<endl;
        return ;
    }
    for(int i=0;i<ss.size();i++)
    {
        if(!vis[i]&&!ind[ss[i]-'a'])
        {
             vis[i]=1;
             v.push_back(ss[i]);
             for(int j=0;j<graph[ss[i]-'a'].size();j++)
             {
                 int v=graph[ss[i]-'a'][j];
                 ind[v]--;
             }
             topological_sort();
             vis[i]=0;
             v.pop_back();
             for(int k=0;k<graph[ss[i]-'a'].size();k++)
             {
                 int v=graph[ss[i]-'a'][k];
                 ind[v]++;
             }
        }
    }
    return;
}
int main()
{
    int tc=1;
    while(getline(cin,s))
    {
        for(int i=0;i<N;i++)graph[i].clear();
        memset(vis,0,sizeof vis);
        memset(ind,0,sizeof ind);
        ss="";
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='a'&&s[i]<='z')ss+=s[i];
        }
         sort(ss.begin(),ss.end());
        string condition;
        getline(cin ,condition);
        for(int i=0; i<condition.size(); i+=4)
        {
            graph[condition[i]-'a'].push_back(condition[i+2]-'a');
            ind[condition[i+2]-'a']++;
        }
        if(tc!=1)puts("");
      topological_sort();
      tc++;
    }
    return 0;
}

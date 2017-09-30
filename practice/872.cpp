#include<bits/stdc++.h>
#define N 305
using namespace std;
vector<int>graph[N];
vector<char>vv;
string s;
string ss;
string cnd;
int vis[N],ind[N];
void topological_sort()
{
    if(vv.size()==ss.size())
    {
        for(int i=0; i<vv.size(); i++)
        {
           if(!i)cout<<vv[i];
            else
            cout<<" "<<vv[i];
        }
        cout<<endl;
        return;
    }

    for(int i=0; i<ss.size(); i++)
    {
        if(!vis[i]&&!ind[ss[i]-'A'])
        {
            vis[i]=1;
            vv.push_back(ss[i]);
            for(int j=0; j<graph[ss[i]-'A'].size(); j++)
            {
                int v=graph[ss[i]-'A'][j];
                ind[v]--;
            }
            topological_sort();
            vis[i]=0;
            vv.pop_back();
            for(int k=0; k<graph[ss[i]-'A'].size(); k++)
            {
                int v=graph[ss[i]-'A'][k];
                ind[v]++;
            }
        }
    }
    return;
}
int main()
{

    int n;
    cin>>n;
    getchar();
    getchar();
    while(n--)
    {
        getline(cin,s);
        ss="";
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
                ss+=s[i];
        }
        sort(ss.begin(),ss.end());
        getline(cin,cnd);
        for(int i=0; i<cnd.size(); i+=4)
        {
            graph[cnd[i]-'A'].push_back(cnd[i+2]-'A');
            ind[cnd[i+2]-'A']++;
        }
        int g=0;
        for(int i=0; i<ss.size(); i++)
            if(ind[ss[i]-'A'])g++;
        if(g==ss.size())
            cout<<"NO"<<endl;
        else
        {
            topological_sort();
        }
        if(n)
        {
            cout<<endl;
            getchar();
        }
        for(int i=0; i<N; i++)graph[i].clear();
        s.clear();
        ss.clear();
        cnd.clear();
    }

    return 0;
}

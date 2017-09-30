#include<bits/stdc++.h>
using namespace std;
int vis[27];
vector<int>adj[27],gh;
int take[27];
int main()
{
    int n;
    while(cin>>n)
    {
        int r;
        cin>>r;
        string s;
        cin>>s;
        gh.clear();
        for(int i=0; i<s.size(); i++)
        {
            int p=s[i]-'A';
            gh.push_back(p);
            take[p]=1;
            vis[p]=1;
        }
        for(int j=0; j<r; j++)
        {
            string ss;
            cin>>ss;
            int x=ss[0]-'A';
            int y=ss[1]-'A';
            adj[x].push_back(y);
            adj[y].push_back(x);
            if(!take[x])gh.push_back(x);
            if(!take[y])gh.push_back(y);
            take[x]=1;
            take[y]=1;
        }
        int ans=0;
        vector<int>tmp;
        for(int i=0; i<gh.size(); i++)
        {
            int lal=0;
            for(int j=0; j<gh.size(); j++)
            {
                int v=gh[j];
                if(vis[v])continue;
                int on=0;
                for(int k=0; k<adj[v].size(); k++)
                {
                    int vv=adj[v][k];
                    if(vis[vv])on++;
                    if(on==3)
                    {
                        tmp.push_back(v);
                        break;
                    }
                }
            }
            if(tmp.size())ans++;
            else break;
            for(int i=0;i<tmp.size();i++)vis[tmp[i]]=1;
            tmp.clear();
        }
        int ph=0;
       for(int i=0;i<gh.size();i++)
       {
           if(vis[gh[i]])ph++;
       }
       if(ph==n)cout<<"WAKE UP IN, "<<ans<<", YEARS"<<endl;
       else cout<<"THIS BRAIN NEVER WAKES UP"<<endl;
       for(int i=0;i<27;i++)adj[i].clear();
       memset(vis,0,sizeof vis);
       memset(take,0,sizeof take);
    }


    return 0;
}

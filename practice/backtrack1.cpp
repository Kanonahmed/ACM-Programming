#include<bits/stdc++.h>
#define pb(a) push_back(a)
using namespace std;
char s[50],pr[50],c1,c2;
string ch;
vector<int>v[50];
int deg[50],in,vis[50],l,i1,i2;

void backtrack(int pos)
{
    if(pos==in)
    {
        for(int i=0;i<in;i++)printf("%c",pr[i]);
        printf("\n");
        return;
    }
    for(int i=0; i<in; i++)
    {
        if(!vis[i])
        {
            vis[i]=1;
            if(!deg[s[i]-'a'])
            {
                //cout<<i<<" "<<deg[s[i]-'a']<<endl;
                pr[pos]=s[i];
                int p=v[s[i]-'a'].size();
                for(int j=0; j<p; j++)
                {
                    deg[v[s[i]-'a'][j]]--;
                }
                backtrack(pos+1);
                for(int j=0; j<p; j++)
                {
                    deg[v[s[i]-'a'][j]]++;
                }

            }
            vis[i]=0;
        }
    }
    return;
}

int main()
{
    int t=1;
    while(getline(cin,ch))
    {
        l=ch.size();
        in=0;
        for(int i=0; i<l; i++)if(i%2==0)s[in++]=ch[i];
        getline(cin,ch);
        l=ch.size();
        i1=0,i2=2;
        while(i1<l && i2<l)
        {
            c1=ch[i1];
            c2=ch[i2];
            i1+=4,i2+=4;
            v[c1-'a'].pb(c2-'a');
            deg[c2-'a']++;
        }
        //for(int i=0;i<in;i++)cout<<deg[s[i]-'a']<<" ";

        sort(s,s+in);
        if(t!=1)puts("");
        backtrack(0);
        t++;
        for(int i=0; i<=50; i++)deg[i]=0,vis[i]=0,v[i].clear();
    }
    return 0;
}

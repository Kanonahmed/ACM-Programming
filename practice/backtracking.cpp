#include<bits/stdc++.h>
#define pb(a) push_back(a)
using namespace std;
char s[50],pr[50],c1,c2;
string ch;
vector<int>v[50];
int deg[50],in,vis[50],l,i1,i2,fl,chk[50];

void backtrack(int pos)
{
    if(pos==in)
    {
        for(int i=0; i<in; i++)
        {
            if(!i)printf("%c",pr[i]);
            else printf(" %c",pr[i]);
        }
        printf("\n");
        return;
    }
    for(int i=0; i<in; i++)
    {
        if(!vis[i])
        {

            if(!deg[s[i]-'A'])
            {
                vis[i]=1;
                pr[pos]=s[i];
                int p=v[s[i]-'A'].size();
                for(int j=0; j<p; j++)
                {
                    deg[v[s[i]-'A'][j]]--;
                }
                backtrack(pos+1);
                for(int j=0; j<p; j++)
                {
                    deg[v[s[i]-'A'][j]]++;
                }
                vis[i]=0;
            }

        }
    }
    return;
}

int main()
{
    int t=1,n;
    cin>>n;
    getchar();
    getchar();
    while(n--)
    {
        getline(cin,ch);
        l=ch.size();
        in=0;
        for(int i=0; i<l; i++)if(i%2==0)s[in++]=ch[i],chk[ch[i]-'A']=1;
        getline(cin,ch);
        l=ch.size();
        i1=0,i2=2;
        while(i1<l && i2<l)
        {
            c1=ch[i1];
            c2=ch[i2];
            i1+=4,i2+=4;
            v[c1-'A'].pb(c2-'A');
            deg[c2-'A']++;
        }
        sort(s,s+in);
        fl=0;
        for(int i=0;i<26;i++)if(chk[i] && deg[i])fl++;
        if(fl==in)printf("NO\n");
        else backtrack(0);
        if(n)
        {
            printf("\n");
            getchar();
        }
        for(int i=0; i<=50; i++)deg[i]=0,vis[i]=0,v[i].clear(),chk[i]=0;
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int vis[27][27][27];
struct Z
{
    int on,to,tr;
    int cs;
    Z(int _x,int __x,int ___x,int ____x){on=_x;to=__x;tr=___x;cs=____x;}
};
int change(int cr,int chn)
{
    int h=cr+chn;
    if(h>25)return 0;
    else if(h<0)return 25;
    else return h;
}
int go(string st,string en)
{
    int fs=st[0]-'a',sc=st[1]-'a',th=st[2]-'a';
    if(vis[fs][sc][th]==-1)return -1;
    queue<Z>q;
    q.push(Z(fs,sc,th,0));
    vis[fs][sc][th]=1;
    while(!q.empty())
    {
        Z u=q.front();q.pop();
        if(u.on==en[0]-'a'&&u.to==en[1]-'a'&&u.tr==en[2]-'a')return u.cs;
        int one=change(u.on,1),one2=change(u.on,-1);
        int two=change(u.to,1),two2=change(u.to,-1);
        int trr=change(u.tr,1),trr2=change(u.tr,-1);
        if(vis[one][u.to][u.tr]==0){q.push(Z(one,u.to,u.tr,u.cs+1));vis[one][u.to][u.tr]=1;}
        if(vis[one2][u.to][u.tr]==0){q.push(Z(one2,u.to,u.tr,u.cs+1));vis[one2][u.to][u.tr]=1;}
        if(vis[u.on][two][u.tr]==0){q.push(Z(u.on,two,u.tr,u.cs+1));vis[u.on][two][u.tr]=1;}
        if(vis[u.on][two2][u.tr]==0){q.push(Z(u.on,two2,u.tr,u.cs+1));vis[u.on][two2][u.tr]=1;}
        if(vis[u.on][u.to][trr]==0){q.push(Z(u.on,u.to,trr,u.cs+1));vis[u.on][u.to][trr]=1;}
        if(vis[u.on][u.to][trr2]==0){q.push(Z(u.on,u.to,trr2,u.cs+1));vis[u.on][u.to][trr]=1;}
    }
    return -1;
}
int main()
{
    int tc,ks=1;
    cin>>tc;
    while(tc--)
    {
        string st,en;
        cin>>st>>en;
        int n,k=0;
        cin>>n;
        memset(vis,0,sizeof vis);
        for(int i=0;i<n;i++)
        {
            string s,s1,s2;
            cin>>s>>s1>>s2;
            for(int i=0;i<s.size();i++)
                for(int j=0;j<s1.size();j++)
                   for(int k=0;k<s2.size();k++)
                       vis[s[i]-'a'][s1[j]-'a'][s2[k]-'a']=-1;
        }
        int ans=go(st,en);
        printf("Case %d: %d\n",ks++,ans);
    }



    return 0;
}

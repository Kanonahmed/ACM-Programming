#include<bits/stdc++.h>
using namespace std;
bool ch[1005];
int pr[1000],k;
void sv()
{
    pr[0]=2;
    for(int i=3;i<=1003;i+=2)
    {
        if(!ch[i])
        {
            pr[++k]=i;
            for(int j=i;j<=1003;j+=i)ch[j]=1;
        }
    }
}
int go(int a,int b)
{
    bool vis[1005];
    vector<int>v;
    memset(vis,0,sizeof vis);
    vis[a]=1;
    queue<pair<int,int> >q;
    q.push({a,0});
    while(!q.empty())
    {
        pair<int,int> top=q.front();q.pop();
            int vv=top.first;
            if(vv==b)return top.second;
            else if(vv<b)
            {
                int n=vv;
                for(int i=0;pr[i]<=sqrt(n)&&i<=k;i++)
                 {
                   if(n%pr[i]==0)
                    {
                      int fx=vv+pr[i];
                      if(!vis[fx]&&fx<=b){vis[fx]=1;q.push({fx,top.second+1});}
                      while(n%pr[i]==0)n/=pr[i];
                    }
                }
              if(n>1&& n!=vv){
                    int fx=vv+n;
                      if(!vis[fx]&&fx<=b){vis[fx]=1;q.push({fx,top.second+1});}
                  }
            }

    }
    return -1;
}
int main()
{
    sv();
   int tc,ks=1;
   cin>>tc;
   while(tc--)
   {
       int a,b;
       scanf("%d %d",&a,&b);
       int res=go(a,b);
       printf("Case %d: %d\n",ks++,res);

   }

    return 0;
}

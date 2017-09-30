#include<bits/stdc++.h>
using namespace std;
int a[2000005],b[2000005],c[2000005];
struct Z
{
    int id,l,s;
    Z(int u,int x,int y){id=u;l=x;s=y;}
    bool operator<(const Z &p)const
    {
       if(l>p.l)return 1;
       else if(l==p.l&&s>p.s)return 1;
       else return 0;
    }
};
int main()
{
   int n;
   cin>>n;
   vector<Z>v;
   map<int,int>mp;
   int k=1;
   for(int i=1;i<=n;i++)
   {
      int x;cin>>x;if(!mp[x])mp[x]=k++;
      a[mp[x]]++;
   }
   int m;
   cin>>m;
   for(int i=1;i<=m;i++){cin>>b[i];if(!mp[b[i]])mp[b[i]]=k++;}
   for(int i=1;i<=m;i++){cin>>c[i];if(!mp[c[i]])mp[c[i]]=k++;}


   for(int i=1;i<=m;i++)
   {
       v.push_back(Z(i,a[mp[b[i]]],a[mp[c[i]]]));
   }
   sort(v.begin(),v.end());
   cout<<v[0].id<<endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
pair<int,int>v[4*100005];
int a[100005];
void built(int id,int s,int e)
{
    if(s==e)
    {
        v[id]=make_pair(a[s],a[s]);
        return ;
    }
    int lft,rgt,md;
    lft=id<<1;rgt=lft+1;md=(s+e)/2;
    built(lft,s,md);
    built(rgt,md+1,e);
    v[id].first=max(v[lft].first,v[rgt].first);
    v[id].second=min(v[lft].second,v[rgt].second);
}
pair<int,int> qry(int id,int b,int e,int l,int r)
{
    if(l>e||r<b)
    {
        pair<int,int>ss;
        ss=make_pair(0,100005);
        return ss;
    }
    if(l<=b&&r>=e)return v[id];
    int lft,rgt,md;
    lft=id<<1;rgt=lft+1;md=(b+e)/2;
    pair<int ,int>aa,bb,rr;
    aa=qry(lft,b,md,l,r);
    bb=qry(rgt,md+1,e,l,r);
    rr.first=max(aa.first,bb.first);
    rr.second=min(aa.second,bb.second);
    return rr;

}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    built(1,1,n);
       int mx=0;
      for(int i=1;i<=n;i++)
      {
          int lo=i,hi=n,mid;
          while(lo<=hi)
          {
            mid=(lo+hi)/2;
            pair<int,int>res=qry(1,1,n,i,mid);
            if(res.first-res.second<=1)
            {
                mx=max(mx,mid-i+1);
                lo=mid+1;
            }
            else hi=mid-1;
          }
      }
      cout<<mx<<endl;
    return 0;
}

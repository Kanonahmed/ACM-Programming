#include<bits/stdc++.h>
using namespace std;
struct data
{
    int vl,cnt;
    data(int x,int y){vl=x;cnt=y;}
    bool operator<(const data &p)const
    {
        if(cnt>p.cnt)return true;
        else if(cnt==p.cnt&&vl>p.vl)return true;
        else return false;
    }
};
int main()
{
       int tc,ks=1;
       cin>>tc;
       while(tc--)
       {
          int n,a[105];
          memset(a,0,sizeof a);
          cin>>n;
          for(int i=0;i<n;i++)
          {
              int x;cin>>x;a[x]++;
          }
          vector<data>v;
          for(int i=0;i<=100;i++)if(a[i])v.push_back(data(i,a[i]));
          sort(v.begin(),v.end());
          printf("Case %d: %d %d\n",ks++,v[0].vl,v[0].cnt);
       }
    return 0;
}

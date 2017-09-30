#include<bits/stdc++.h>
using namespace std;
const int N=1000000;
int cnt[N+5],a[N+5];
int st[N+5],nd[N+5];
int main()
{
   int n,fix,mx=0;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       cin>>a[i];
       cnt[a[i]]++;
       if(!st[a[i]])st[a[i]]=i;
        nd[a[i]]=i;
       if(mx<cnt[a[i]])
       {
           mx=cnt[a[i]];
           fix=i;
       }
   }
   for(int i=1;i<=n;i++)
   {
       if(mx==cnt[a[i]]&& abs(st[a[i]]-nd[a[i]])<abs(st[a[fix]]-nd[a[fix]]))fix=i;
   }
   cout<<st[a[fix]]<<" "<<nd[a[fix]]<<endl;
    return 0;
}

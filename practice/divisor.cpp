#include<bits/stdc++.h>
using namespace std;
bool vis[1005];
int a[1005],k,len;
vector<pair<int,int> >v;
void sieve()
{
    k=0;
    a[k++]=2;
    for(int i=3;i<=1000;i+=2)
    {
        if(!vis[i])
        {
            a[k++]=i;
            for(int j=2*i;j<=1000;j+=i)vis[j]=1;
        }
    }
}
void go(int p,int vl)
{
    cout<<p<<" "<<vl<<endl;
    getchar();
    if(p==len)
    {
        //cout<<vl<<" ";
        return ;
    }
    go(p+1,vl);
    for(int i=0;i<v[p].second;i++)
    {
        vl*=v[p].first;
        go(p+1,vl);
    }

}
int main()
{
    sieve();
    //cout<<k<<" "<<a[0]<<endl;
    int n;
    cin>>n;
    for(int i=0;a[i]<=sqrt(n)&&i<k;i++)
    {
        if(n%a[i]==0)
        {
            int cn=0;
            while(n%a[i]==0){n/=a[i];cn++;}
            v.push_back(make_pair(a[i],cn));
        }
    }
    if(n>1)v.push_back(make_pair(n,1));
   len=v.size();
   //cout<<len<<endl;
   //for(int i=0;i<len;i++)cout<<v[i].first<<" "<<v[i].second<<endl;
   go(0,1);

    return 0;
}

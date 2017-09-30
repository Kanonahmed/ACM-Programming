#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,m;
 cin>>n>>m;
 vector<int>adj[15];
 int mx=-1;
 for(int i=0;i<n;i++)
 {
     int x;
     cin>>x;
     mx=max(x,mx);
     for(int j=0;j<x;j++){int k;cin>>k;adj[i].push_back(k);}
     //sort(adj[i].begin(),adj[i].end());
 }
 int sum=0;
 for(int i=0;i<mx&&i<n;i++)
 {
     vector<int>v;
     for(int j=0;j<n;j++)
     {
         if(adj[j].size()>i)
         {
             v.push_back(adj[j][i]);
         }
     }
     sort(v.begin(),v.end());
     for(int k=0;k<v.size();k++)
     {
         if(sum<=v[k])sum+=v[k];
     }
 }
 cout<<sum<<endl;

    return 0;
}

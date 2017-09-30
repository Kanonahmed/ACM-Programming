#include<bits/stdc++.h>
using namespace std;
int n,k;
string a="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
vector<char>v;
int vis[27];
void permutation()
{
    if(!k)return;
    if(v.size()==n)
    {
        for(int i=0; i<n; i++)cout<<v[i];
        k--;
        cout<<endl;
        return ;
    }
    for(int i=0; i<n; i++)
    {
        if(!vis[i])
        {
            vis[i]=1;
            v.push_back(a[i]);
            permutation();
            v.pop_back();
            vis[i]=0;
        }
    }
}
int main()
{
    int tc,t=1;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>k;
        cout<<"Case "<<t<<":"<<endl;
        permutation();
        t++;
    }
    return 0;
}

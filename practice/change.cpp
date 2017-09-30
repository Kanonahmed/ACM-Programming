#include<bits/stdc++.h>
using namespace std;
int take[20];
int a[]={1,3,5,10};
int cnt;
int vis[100];
vector<int>v;
int change(int taka)
{
    if(taka==0){
        for(int i=0;i<v.size();i++)
        {vis[v[i]]=1;cout<<v[i]<<" ";}
        cout<<endl;
        return cnt++;
        }
    if(taka<0){return 0;}
    for(int i=0;i<4;i++)
    {
        if(take[i]==0&&vis[a[i]]==0)
        {
            take[i]=1;
            v.push_back(a[i]);
            change(taka-a[i]);
            take[i]=0;
            v.pop_back();
        }
    }
}
int main()
{
int t;
cin>>t;
change(t);
cout<<cnt<<endl;

    return 0;
}

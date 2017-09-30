#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int a[]={1,2,3,4};
int vis[20];
void permut()
{
    if(v.size()==4)
    {
        for(int i=0;i<4;i++)
        cout<<v[i]<<" ";
        puts(" ");
        return ;
    }
    for(int i=0;i<4;i++)
    {
        if(vis[i]==0)
        {
            vis[i]=1;
            v.push_back(a[i]);
            permut();
            vis[i]=0;v.pop_back();
        }
    }
}
int main()
{
permut();


    return 0;
}

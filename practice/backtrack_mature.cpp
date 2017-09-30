#include<bits/stdc++.h>
using namespace std;
int coin[]={1,2,3};
int vis[100],res;
vector<int>v;
void go(int pos,string s)
{
    if(pos==4)
    {
        //for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
        cout<<s<<endl;
        cout<<endl;
        res++;
        return ;
    }
    for(int i=0;i<3;i++)
    {
//        if(!vis[i])
//        {
//            v.push_back(coin[i]);
//            vis[i]=1;
//            go(cnt+1);
//            vis[i]=0;
//            v.pop_back();
//        }
    string tmp=s+char(coin[i]+'0');
    go(pos+1,tmp);
    }
}
int main()
{
  go(0,"");
  cout<<res<<endl;

    return 0;
}

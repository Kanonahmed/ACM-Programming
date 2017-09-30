#include<bits/stdc++.h>
using namespace std;
int coin[]={1,2,3};
vector<int>x;
void go(int m,vector<int>v)
{
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
    if(m==(1<<3)-1)return ;
    for(int i=0;i<3;i++)
    {
        if((m&(1<<i))==0)
        {
            v.push_back(coin[i]);
            go(m|(1<<i),v);
            v.pop_back();
        }
    }
}
int main()
{
   go(0,x);



    return 0;
}

#include<bits/stdc++.h>
using namespace std;
string s;
vector<char>v;
int vis[100];
void backtrack(int pos)
{
    if(pos==s.size())
    {
        for(int j=0;j<v.size();j++)cout<<v[j];
        cout<<endl;
        return ;
    }
    for(int i=0;i<s.size();i++)
    {
        if(!vis[i])
        {
            vis[i]=1;
            v.push_back(s[i]);
           backtrack(pos+1);
           vis[i]=0;
           v.pop_back();
        }
    }
}
int main()
{
     s="abcd";
    backtrack(0);

    return 0;
}

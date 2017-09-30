#include<bits/stdc++.h>
using namespace std;
string a="abc";
vector<char>v;
int vis[20];
int n[27];
void permut()
{
    if(v.size()==3)
    {
        for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
        puts(" ");
        return ;
    }
   for(int i=0;i<a.size();i++)
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
//    for(int i=0;i<a.size();i++)
//    {
//        int sum=a[i]-'a';
//        n[sum]++;
//    }

  permut();


    return 0;
}

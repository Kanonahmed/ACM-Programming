#include<bits/stdc++.h>
using namespace std;
int main()
{

     string s;
     map<string ,pair<int,int > >mp;
     cin>>s;
     string p="";
     for(int i=0;i<s.size()-1;i++)
     {
         p+=s[i];
         p+=s[i+1];
         if(mp.find(p)==mp.end())
         {
             mp[p]=make_pair(i,i+1);
         }
         cout<<mp[p].first<<mp[p].second<<endl;
     }

    return 0;
}

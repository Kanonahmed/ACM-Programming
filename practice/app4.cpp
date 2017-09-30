#include<bits/stdc++.h>
using namespace std;
string s;

string go(string ans,int p)
{
   if(p==0){
    ans+=s[p];
    return ans;
   }
   ans+=s[p];
   p-=1;
   return go(ans,p);
}
int main()
{
  cin>>s;

  string res=go("",s.size()-1);
  cout<<res<<endl;

    return 0;
}

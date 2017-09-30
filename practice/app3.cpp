#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s,ans="";
   cin>>s;
   for(int i=s.size()-1;i>=0;i--)
    ans+=s[i];

   cout<<ans<<endl;




    return 0;
}

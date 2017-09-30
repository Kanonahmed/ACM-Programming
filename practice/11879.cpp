#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  while(cin>>s)
  {
      if(s[0]=='0')break;
      int now=0;
      for(int i=0;i<s.size();i++)
      {
          now=now*10+(s[i]-'0');
          now=now%17;
      }
      if(now==0)cout<<"1"<<endl;
      else cout<<"0"<<endl;
  }

    return 0;
}

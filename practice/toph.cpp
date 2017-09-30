#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  while(cin>>s){
  int cnt=0,lo=0,hi=0,d=0;
  for(int i=0;i<s.size();i++)
  {
      if(s[i]>='a'&&s[i]<='z')lo=1;
      else if(s[i]>='A'&&s[i]<='Z')hi=1;
      else d=1;
      if(lo&&hi&&d)
      {cnt++;lo=0;hi=0;d=0;}
  }
  cout<<cnt<<endl;
  }
    return 0;
}

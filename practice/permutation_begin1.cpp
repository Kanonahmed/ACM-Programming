#include<bits/stdc++.h>
using namespace std;
string a="abbc";
void permut(string s,int pos)
{
    if(pos==a.size())
    {
        cout<<s<<endl;
        return;
    }
  for(int i=0;i<=s.size();i++)
  {
      string str=s;
      str.insert(i,1,a[pos]);
      permut(str,pos+1);
      if(str[i+1]==a[pos])break;
  }
}
int main()
{
  permut("",0);


    return 0;
}

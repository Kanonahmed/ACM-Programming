#include<bits/stdc++.h>
using namespace std;
const int N=1000;
int ar[N],res;
int main()
{
  string s;
  string ss="CODEFORCES";
  cin>>s;
  if(s.size()<ss.size()){cout<<"NO"<<endl;return 0;}
  int l=s.size()-ss.size();
   for(int i=0;i<s.size();i++)
   {
       string pre="";
       for(int j=0;j<i;j++)pre+=s[j];
       string post="";
       for(int k=i+l;k<s.size();k++)post+=s[k];
       string fnl=pre+post;
       if(fnl==ss){cout<<"YES"<<endl;return 0;}
   }
   cout<<"NO"<<endl;

    return 0;
}

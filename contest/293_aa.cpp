#include<bits/stdc++.h>
using namespace std;
int main()
{
string s,t;
cin>>s>>t;
for(int i=0;i<s.size();i++)
{
    s[i]++;
    if(s[i]>='a'&&s[i]<='z'&&s<t){cout<<s<<endl;return 0;}
    s[i]--;
}
for(int i=0;i<t.size();i++)
{
    t[i]--;
    if(t[i]>='a'&&t[i]<='z'&&s<t){cout<<t<<endl;return 0;}
    t[i]++;
}
cout<<"No such string"<<endl;
    return 0;
}

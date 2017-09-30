#include<bits/stdc++.h>
using namespace std;
int main()
{
string s,s1;
cin>>s;
for(int i=0;i<s.size();i++)
{
    int t=9-(s[i]-'0');
    if(i==0&&t==0)continue;
    if(t<(s[i]-'0'))s[i]=t+'0';

}
cout<<s<<endl;

    return 0;
}


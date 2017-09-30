#include<bits/stdc++.h>
using namespace std;
int main()
{
string s,t;
while(cin>>s>>t){
int cnt=0;
int tmp=0;
for(int i=0;i<s.size();i++)
{
    for(int j=tmp;j<t.size();j++)
    {
        if(s[i]==t[j]){tmp=j+1;cnt++;break;}
    }
}
if(cnt==s.size())cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
    return 0;
}

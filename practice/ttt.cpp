#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
getline(cin,s);
string tmp="";
for(int i=0;i<=s.size();i++)
{
    if(s[i]==32||s[i]=='\0')
    {
        reverse(tmp.begin(),tmp.end());
        cout<<tmp<<endl;
        tmp="";
    }
    else tmp+=s[i];
}



    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ss="";
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u'||s[i]=='Y'||s[i]=='y')
            ;
        else
        {
            ss+=s[i];
        }
    }
    //cout<<ss<<endl;
    string fnal="";
    for(int i=0; i<ss.size(); i++)
    {
        if(ss[i]>=65&&ss[i]<=90)
        {
            fnal+='.';
            fnal+=ss[i]+32;
            //cout<<fnal<<endl;
        }
        else
        {
            fnal+='.';
            fnal+=ss[i];
            //cout<<fnal<<endl;
        }
    }
   cout<<fnal<<endl;

    return 0;
}

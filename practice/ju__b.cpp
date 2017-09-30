#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    string s,ss,sss;
    cin>>s>>ss>>sss;
    string s1=s+ss;

    for(int i=0;i<s1.size();i++)
    {
        for(int j=0;j<sss.size();j++)
        {
            if(s1[i]==sss[j]&&s1[i]!='1')
            {
                s1[i]='1';
                sss[j]='1';
                break;
            }
        }
    }
    string nw="";
    string pw="";
 for(int i=0;i<s1.size();i++)
 {
     if(s1[i]!='1')
     nw+=s1[i];
 }
for(int i=0;i<sss.size();i++)
{
    if(sss[i]!='1')pw+=sss[i];
}
//cout<<pw<<endl;
//cout<<nw<<endl;
if(nw.compare(pw)==0)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;

}

#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    string n;
    int l;
    cin>>l;
    cin>>n;
    string ss="";
    for(int j=0;j<n.size();j++)
    {
    if(n[j]!='4'&&n[j]!='7') {cout<<"NO"<<endl;return 0;}
    }
    ss=n;
    int s1=0,s2=0;
    for(int i=0;i<l/2;i++)
    s1+=ss[i]-'0';
    for(int i=l/2;i<l;i++)
    s2+=ss[i]-'0';
    if(s1==s2&&s1!=0&&s2!=0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

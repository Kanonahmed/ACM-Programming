#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s,ss,sss;
    cin>>n>>s;
    ss="";
    for(int i=0; i<(s.size())/2; i++)
        ss+=s[i];
    sss="";
    for(int i=s.size()-1; i>=(s.size())/2; i--)
        sss+=s[i];
        sort(ss.begin(),ss.end());
        sort(sss.begin(),sss.end());
    //cout<<ss<<" "<<sss<<endl;
    int flag=0;
    for(int j=0; j<ss.size(); j++)
    {
        if(ss[j]>sss[j])
        {
             flag=0;
        }
        else {flag=1;break;}
    }
    if(flag==0)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    int tlag=0;
    for(int k=0; k<ss.size(); k++)
    {
        if(ss[k]<sss[k])
        {
              tlag=0;
        }
        else {tlag=1;break;}
    }
    if(tlag==0)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}

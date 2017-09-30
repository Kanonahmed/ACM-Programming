#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int f=-1,m=-1;
    cin>>s;
    int b=s[s.size()-1]-'0';
    //cout<<b<<endl;
    for(int i=0;i<s.size()-1;i++)
    {
        int a=s[i]-'0';
        if(a%2==0&&a<b)
        {
            m=i;
           break;
        }
    }
   for(int i=s.size()-2;i>=0;i--)
   {
       int a=s[i]-'0';
       if(a%2==0&&a>b)
       {
            f=i;
           break;
       }
   }
    if(f==-1&&m==-1)cout<<"-1"<<endl;
    else
    {
        if(m!=-1)
        {swap(s[s.size()-1],s[m]);cout<<s<<endl;}
        else
        {swap(s[s.size()-1],s[f]);cout<<s<<endl;}
    }

    return 0;
}

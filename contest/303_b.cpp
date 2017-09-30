#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ss;
    cin>>s>>ss;
    int i;
    string p="";
    int g=0;
    int cnt=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]!=ss[i])
        {
            if(g==1)
            {
                p+=s[i];g=0;
            }
            else
            {
                p+=ss[i];
                g=1;
            }
            cnt++;
        }
        else p+=s[i];
    }
    if(cnt%2)
        cout<<"impossible"<<endl;
        else
            cout<<p<<endl;
    return 0;
}

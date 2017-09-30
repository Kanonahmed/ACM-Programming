#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string tmp="";
    int k=0;
    for(int i=0; i<=s.size(); i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            tmp+=s[i];
        }
        else
        {
            k++;
            if(k%2==0)
            {
                reverse(tmp.begin(),tmp.end());
                cout<<tmp<<" ";
                tmp="";
            }
            else
            {
                cout<<tmp<<" ";
                tmp="";
            }
        }
    }


    return 0;
}

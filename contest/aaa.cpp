#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s[2];
    cin>>s[0]>>s[1];
    if(s[0].compare(s[1])==0)
    {
        s[0]=s[1];
        cout<<s[0];
    }
        else
    {s[0]="kan";cout<<s[0];}

    return 0;
}

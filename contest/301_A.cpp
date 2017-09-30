#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string first;
    string second;
    cin>>first>>second;
    int res=0;
    for(int i=0; i<n; i++)
    {
        int s1=first[i]-'0';
        int s2=second[i]-'0';
        int mx=max(s1,s2);
        int mn=min(s1,s2);
        int m1=mx-mn;
        int m2=9-mx+mn+1;
        res+=min(m1,m2);

    }
    cout<<res<<endl;


    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    string s[3005],p[3005];
    char a[3005],b[3005];
    pair<string, string>s1[3005];
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        cin>>s1[i].first>>s1[i].second;
    }
    for(int j=0; j<n; j++)
    {
        cin>>s[j];
        for(int i=0; i<m; i++)
        {
            if(s[j].compare(s1[i].first)==0)
            {
                if((s1[i].first).length()<=(s1[i].second).length())
                    s[j]=s1[i].first;
                else
                s[j]=s1[i].second;
                break;
            }
        }
    }
    for(int i=0;i<n;i++)
    cout<<s[i]<<" ";



    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int res[105];
int main()
{
    int n,k=0;
    map<string ,int>mp;
    cin>>n;
    for(int i=0; i<n;i++)
    {
        string s;
        cin>>s;
        if(mp.find(s)==mp.end())
        {mp[s]=k++;res[mp[s]]++;}
        else res[mp[s]]++;
    }
    int mx=0;
    for(int i=0;i<k;i++)
        if(mx<res[i])mx=res[i];

        cout<<mx<<endl;
    return 0;
}

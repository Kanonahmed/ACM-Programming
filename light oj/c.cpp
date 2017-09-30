#include<bits/stdc++.h>
using namespace std;
int a[10];
int main()
{
    //vector<char> s[1005];
    int tc;
    cin>>tc;
    while(tc--){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
   // cout<<s<<endl;
    for(int i=0; i<s.size(); i++)
    {
        int p=s[i]-'0';
        if(s[i]!=-1+'0')
        {
            int x=1;
            for(int j=i+1; j<s.size(); j++)
            {
                if(s[i]==s[j])
                {
                    x++;
                    s[j]=-1+'0';
                }
            }
            a[p]=x;
        }
    }
    for(int i=0; i<=9; i++)
        cout<<a[i]<<" ";
        cout<<endl;
        s="";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int vis[200];
int main()
{
 string s;
 int n;
 int cnt=0;
 cin>>n>>s;
 for(int i=0;i<s.size();i++)
 {
     if(s[i]>='a'&&s[i]<='z')
     {
         if(vis[s[i]-'0']==0)cnt++;
         vis[s[i]-'0']=1;
     }
     else if(s[i]>='A'&&s[i]<='Z')
     {
         if(vis[s[i]-'0'+32]==0)cnt++;
         vis[s[i]-'0'+32]=1;
     }
 }
if(cnt==26)cout<<"YES"<<endl;
else cout<<"NO"<<endl;

    return 0;
}

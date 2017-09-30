#include<bits/stdc++.h>
#define N 10000000
using namespace std;
int vis[N+5];
int main()
{
    int n;
    while(cin>>n&&n){
        getchar();
   string s;
   getline(cin,s);
   int dc=0,st=0,mx=-1;
   memset(vis,0,sizeof vis);
   for(int i=0;i<s.size();i++)
   {
      if(vis[s[i]]==0){dc++;vis[s[i]]++;}
      else vis[s[i]]++;
      while(dc>n)
      {
          vis[s[st]]--;
          if(vis[s[st]]==0)dc--;
          st++;
      }
      mx=max(mx,(i-st+1));
   }
   cout<<mx<<endl;
    }
    return 0;
}

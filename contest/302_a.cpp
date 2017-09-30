#include<bits/stdc++.h>
using namespace std;
int vis[132];
int main()
{
   int k;
   string s;
   cin>>k>>s;
   int c=0;
   for(int i=0;i<s.size();i++)
     {
         if(!vis[s[i]])
         {
             c++;
             vis[s[i]]=1;
         }
     }
   if(c<k){cout<<"NO"<<endl;return 0;};
   cout<<"YES"<<endl;
   if(k==1){cout<<s<<endl;return 0;}
   memset(vis,0,sizeof vis);
   string ss="";
   ss+=s[0];
   vis[s[0]]=1;
   int h=1,l=0;
   for(int i=1;i<s.size();i++)
   {
       if(s[i]!=ss[i-1]&&!vis[s[i]])
       {
           cout<<ss<<endl;
           ss="";
           ss+=s[i];
           vis[s[i]]=1;
           l++;
           if(l==k-1)break;
       }
       else ss+=s[i];
       h++;
   }
   for(int j=h+1;j<s.size();j++)
    ss+=s[j];
   cout<<ss<<endl;
    return 0;
}

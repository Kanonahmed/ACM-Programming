#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,ans=0;
  string s;
  cin>>n>>m;
  cin>>s;
     for(int i=1;i<s.size();i++)
     {
         if(s[i]=='.'&&s[i-1]=='.')ans++; //better idea.....
     }

   while(m)
   {
       int p;
       char ch;
       scanf("%d %c",&p,&ch);
       p--;
       if(ch=='.')
       {
           if(s[p]=='.'){printf("%d\n",ans);m--;continue;}
           else{
           if(s[p+1]=='.')ans++;
           if(s[p-1]=='.')ans++;
           s[p]=ch;
           }
           printf("%d\n",ans);
       }
       else
       {
           if(s[p]!='.'){printf("%d\n",ans);m--;continue;}
           else
           {
               if(s[p+1]=='.')ans--;
               if(s[p-1]=='.')ans--;
               s[p]=ch;
           }
           printf("%d\n",ans);
       }
       m--;
   }
    return 0;
}

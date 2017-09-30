#include<bits/stdc++.h>
using namespace std;
struct data
{
    string nam;
    int bit,ss;
};
data st[202];
int main()
{
  int b,v;
  while(cin>>b>>v){
  string str[20003];
  int sum=0;
  for(int i=0;i<v;i++)
  {
     string p;
     int q;
     cin>>p>>q;
     st[i].nam=p;
     st[i].bit=q;
     st[i].ss=sum;
     sum+=q;

  }
  for(int i=0;i<sum;i++)
  {
   cin>>str[i];
  }
  int tt;
  cin>>tt;
  for(int j=0;j<tt;j++)
  {
      string pp;int flag=0;
      cin>>pp;
      for(int i=0;i<v;i++)
      {
          if(pp.compare(st[i].nam)==0)
          {
              if(b==0){cout<<pp<<"=0"<<endl;flag=1;break;}
              string fnl="";
           for(int k=st[i].ss;k<(st[i].ss+st[i].bit);k++)
           fnl+=str[k];
           unsigned long long res=0;
           for(int l=0;l<fnl.size();l++)
           {
              res+=(unsigned long long)(fnl[l]-'0')*(unsigned long long)pow(2,(fnl.size()-l-1));
           }
           cout<<st[i].nam<<"="<<res<<endl;
           flag=1;
           break;
          }
      }
      if(flag==0)cout<<pp<<"="<<endl;
  }
  }
    return 0;
}

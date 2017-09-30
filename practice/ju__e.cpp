#include<bits/stdc++.h>
#include<string>
#include<cstring>
using namespace std;
int fr,svn,fr1,svn1,k,sum,sum1;
string a,b;
void digit(string x)
{
    for(int i=0;i<x.size();i++)
    {
        if(x[i]=='4')fr++;
        else svn++;
    }
}
void digit1(string x)
{
    for(int i=0;i<x.size();i++)
    {
        if(x[i]=='4')fr1++;
        else svn1++;
    }
}
void replace()
{
   for(int i=0;i<a.size();i++)
   {
       if(a[i]!=b[i]&&a[i]!='4'&&sum>0)
       {
           a[i]='4';
           sum--;
       }
   }
}
void replace1()
{
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=b[i]&&a[i]!='7'&&sum1>0)
        {
            a[i]='7';
            sum1--;
        }
    }
}
int cnt()
{
    vector<int>p;
    vector<int>q;
    int c=0;
    for(int i=0;i<a.size();i++)
    {
      if(a[i]!=b[i]&&a[i]=='4'&&b[i]=='7')p.push_back(i);
      else if(a[i]!=b[i]&&a[i]=='7'&&b[i]=='4')q.push_back(i);

    }
    c=max(p.size(),q.size());
    return c;
}
int main()
{
    cin>>a>>b;
    digit(a);
    digit1(b);
int s;
    if(fr<fr1)
    {
        sum=fr1-fr;
        s=sum;
        replace();
    }
    else
    {
       sum1=svn1-svn;
       s=sum1;
       replace1();
    }
 int p=cnt();
 //cout<<p+s<<endl;
 printf("%d\n",p+s);


    return 0;
}

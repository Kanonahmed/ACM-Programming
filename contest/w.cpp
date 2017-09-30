#include<bits/stdc++.h>
using namespace std;
int f[15];
int s[15];
string s1,s2;
void binary(int a,int b)
{
    while(a)
    {
        int rem=a%2;
        s1+=rem+'0';
        a/=2;
    }
    if(s1.size()<13)
    {
        for(int i=s1.size();i<13;i++)s1+='0';
    }
    while(b)
    {
        int rem=b%2;
        s2+=rem+'0';
        b/=2;
    }
    if(s2.size()<13)
    {
        for(int i=s2.size();i<13;i++)s2+='0';
    }
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        s1.clear();
        s2.clear();
        int a,b;
        char c;
        scanf("%x %c %x",&a,&c,&b);
        binary(a,b);
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        int sum;
        if(c=='+')
        {
            sum=a+b;
            cout<<s1<<" + "<<s2<<" = "<<sum<<endl;
        }
        else
        {
            sum=a-b;
            cout<<s1<<" - "<<s2<<" = "<<sum<<endl;
        }
    }
    return 0;
}

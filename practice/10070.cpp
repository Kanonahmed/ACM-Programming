#include<bits/stdc++.h>
using namespace std;
string s;
int div(int n)
{
    int now=0;
    for(int i=0; i<s.size(); i++)
    {
        now=now*10+s[i]-'0';
        now=now%n;
    }
    if(now==0)return 1;
    else return 0;
}
int main()
{
    int t=0;
    while(cin>>s)
    {
        int f=0,f1=0,f2=0;
        if(t)cout<<endl;
        if(div(4)==1&&div(100)==0)
        {

            cout<<"This is leap year."<<endl;
            f=1;
        }
        else if(div(400)==1)
        {

            cout<<"This is leap year."<<endl;
            f=1;
        }
        if(div(15)==1)
        {
            cout<<"This is huluculu festival year."<<endl;
            f1=1;
        }
        if(div(55)==1&&f==1)
        {
            cout<<"This is bulukulu festival year."<<endl;
            f2=1;
        }
        if(!f&&!f1&&!f2)
            cout<<"This is an ordinary year."<<endl;
        t++;
        //cout<<endl;
    }


    return 0;
}

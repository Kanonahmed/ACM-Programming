#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main()
{

    string a;
    int i,f,s,t,flag;
    getline(cin,a);
    f=0,s=0,t=0,flag=0;
    for(i=0; i<a.size(); i++)
    {
        if(a[i]=='(')
            f++;
        else if(a[i]==')')
            f--;
        else if(a[i]=='{'&& f==0)
            s++;
        else if(a[i]=='}'&&f==0)
            s--;
        else if(a[i]=='['&&s==0 &&f==0)
            t++;
        else if(a[i]==']'&&f==0&&s==0)
            t--;
        else
        {
            flag=1;
            break;
        }


    }
    if(f==0&&s==0&&t==0&&flag==0)
        cout<<"posible";
    else
        cout<<"imposible";


    return 0;
}

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
    int i,sum,flag;
    getline(cin,a);
    sum=0;
    for(i=0;i<a.size();i++)
    {
        if(a[i]=='(')
           sum++;
           else
           sum--;
           if(sum<0)
           {
               break;
           }
    }
    if(sum!=0)
    cout<<"imposible";
    else
    cout<<"posible";




    return 0;
}

#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int tc,a,b;
    cin>>tc;
    while(tc)
    {
        cin>>a>>b;
        if(a>b)
            cout<<">"<<endl;
        else if(a<b)
            cout<<"<"<<endl;
        else if(a==b)
            cout<<"="<<endl;


        tc--;
    }


    return 0;
}

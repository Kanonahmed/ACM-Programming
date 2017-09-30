#include<bits/stdc++.h>
using namespace std;
int fab(int x)
{
    if(x==0)return 0;
    if(x==1)return 1;
    //cout<<x<<endl;
    int res=fab(x-1)+fab(x-2);
    //cout<<res<<endl;
    return res;
}
int main()
{

cout<<fab(5);


    return 0;
}

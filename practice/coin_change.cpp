#include<bits/stdc++.h>
using namespace std;
string s="135";
int cnt;
int change(int taka,int p)
{
    if(taka==0)cnt++;
    if(p<0) return 0;
    if(taka<0)return 0;
    change(taka,p-1)+change(taka-(s[p]-'0'),p);
}
int main()
{
    int t;
    cin>>t;
    change(t,2);
    cout<<cnt<<endl;
    return 0;
}

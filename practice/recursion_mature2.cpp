#include<bits/stdc++.h>
using namespace std;
void go(int u,string s)
{
    if(u==0){reverse(s.begin(),s.end());cout<<s<<endl;return;}
    go(u/2,s+=((u%2)+'0'));
}
int main()
{
    int n,sum=0;
    cin>>n;
    go(n,"");



    return 0;
}

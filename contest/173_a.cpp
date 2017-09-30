#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ss,mn,mm;
    s="++X";
    ss="X++";
    mn="--X";
    mm="X--";
    int n;
    cin>>n;
    int x=0;
    for(int i=0;i<n;i++)
    {
        string a;
        cin>>a;
        if(a==s||a==ss)x++;
        else if(a==mn||a==mm)x--;
    }
    cout<<x<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
string a="1234";
void sub(int p,string s)
{
    if(p==4)
    {
        cout<<s<<endl;
        return;
    }
    sub(p+1,s+a[p]);
     sub(p+1,s);
}
int main()
{
    sub(0,"");
    cout<<endl;
    return 0;
}

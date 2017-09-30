#include<bits/stdc++.h>
using namespace std;
string s;
void subset(int pos,string cur)
{
    if(pos>=s.size())
    {
        cout<<cur<<endl;
        return ;
    }
    subset(pos+1,cur+s[pos]);
    subset(pos+1,cur);
    //cur+=s[pos];
}
int main()
{
   cin>>s;
  subset(0,"");

    return 0;
}

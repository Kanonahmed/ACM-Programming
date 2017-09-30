#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,now,d;
    string a;
    getline(cin,a);
    cin>>d;
    now=0;
    for(int i=0;i<a.size();i++)
    {
       now=now*10+a[i];
       now=now%d;
    }
    if(now==0)
    cout<<"devisible\n";
    else
    cout<<"non devisible\n";
    return 0;
}

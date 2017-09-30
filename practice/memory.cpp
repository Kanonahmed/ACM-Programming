#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
int main()
{

    string a;
    int b[100];
    //getline(cin,a);
    for(int i=0;i<5;i++)
    cin>>b[i];
    memset(b,0,sizeof b); ///initiates value is zero
    //a.clear();   clear a string
    //SS.clear(); clear vector
   // mp.clear(); clear vector
    for(int i=0;i<5;i++)
    cout<<b[i];

    return 0;
}

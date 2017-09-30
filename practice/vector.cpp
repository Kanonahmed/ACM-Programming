#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int h;
    vector<string>v;
    vector<int>ss;
    v.push_back("the number is 10");
    v.push_back("the number is 20");
    v.push_back("the number is 30");
//    cout<<v.size()<<endl;
    v.push_back("the number is 10");
//    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<endl;
    v.pop_back();
    cout<<"after removing..."<<endl;
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<endl;
    cout<<"using iterator......"<<endl;
    vector<string>::iterator it;
    for(it=v.begin();it<v.end();++it)
    cout<<*it<<endl;
    cout<<"using reverse iterating..."<<endl;
    vector<string>::reverse_iterator itt;
    for(itt=v.rbegin();itt<v.rend();++itt)
    cout<<*itt<<endl;
    cout<<"after swaping....."<<endl;
    swap( v[0],v[2]);
    for(it=v.begin();it !=v.end();++it)
    cout<<*it<<endl;
    cout<<"some other operation......"<<endl;
       cout<<v[0]<<endl;


//       for(h=0;h<ss.size();h++)
//       {
//           ss.push_back(ss[h]);
//       }
//       vector<int>::iterator p;
//
//      for(p=ss.begin();p<ss.end();++p)
//      cout<<*p<<endl;

    return 0;
}

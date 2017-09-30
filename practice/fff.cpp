#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    cout<<s<<endl;
    printf("tmi ki dekhechho kovu a jiboner porajoy....na dekhle muri kaho");
    vector<int>v;
    v.push_back(5);
    v.push_back(9);
    cout<<v[0]<<" "<<v[1]<<endl;
    priority_queue<int>q;
    q.push(9);
    q.push(10);
    cout<<q.top()<<" ";q.pop();cout<<q.top()<<endl;
    return 0;
}

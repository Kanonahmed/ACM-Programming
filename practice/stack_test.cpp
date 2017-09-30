#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>ss;
    cout<<ss.size()<<endl;
    ss.push(5);
    cout<<ss.size()<<endl;
    for(int i=1;i<=10;i++)ss.push(i);
    cout<<ss.size()<<endl;
    if(!ss.empty())
    {
        cout<<"yes\n";
    }
    while(!ss.empty())
    {
        cout<<ss.top()<<" ";
        ss.pop();
    }



    ///////////
    ///////////
    stack<int>s;
    s.push(11);
    s.push(12);
    s.push(13);
    s.push(14);
    swap(s,ss);
    cout<<endl;
    while(!ss.empty())
    {
        cout<<ss.top()<<" ";
        ss.pop();
    }
    cout<<endl;
    stack<int>st;
    int n;
    do
    {

        cin>>n;
        st.push(n);

    }while(n);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}

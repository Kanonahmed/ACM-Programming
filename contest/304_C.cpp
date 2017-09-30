#include<bits/stdc++.h>
using namespace std;
queue<int>q1,q2;
int main()
{
    int n,fs,se;
    cin>>n;
    cin>>fs;
    for(int i=0; i<fs; i++)
    {
        int x;
        cin>>x;
        q1.push(x);
    }
    cin>>se;
    for(int i=0; i<se; i++)
    {
        int x;
        cin>>x;
        q2.push(x);
    }
    int j=0;
    while(!q1.empty()&&!q2.empty())
    {
        int a=q1.front();
        q1.pop();
        int b=q2.front();
        q2.pop();
        if(a>b)
        {
            q1.push(b);
            q1.push(a);
        }
        else
        {
            q2.push(a);
            q2.push(b);

        }
        j++;
        if(j>1000000)break;
    }
    if(q1.empty()){cout<<j<<" 2"<<endl;}
    else if(q2.empty()){cout<<j<<" 1"<<endl;}
    else cout<<"-1"<<endl;
    return 0;
}

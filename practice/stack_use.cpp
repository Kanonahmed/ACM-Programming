#include<bits/stdc++.h>
using namespace std;
int main()
{

    stack<char>v;
    string a;
    int flag=1,f=1;
    cin>>a;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]=='('||a[i]==')')
        {
            int f=0;
            if(a[i]=='(')
                v.push(a[i]);
            if(a[i]==')')
            {
                if(v.empty())
                {
                    flag=0;
                    break;
                }
                else v.pop();
            }
        }




    }
    if(v.empty()&&flag)
        cout<<"preceding is ok"<<endl;
    else cout<<"preceding is not ok"<<endl;

    return 0;
}

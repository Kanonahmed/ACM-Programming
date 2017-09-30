#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,n1,tc,t;
    long long ac;
    string s;
    cin>>tc;
    t=1;
    while(tc--)
    {
        cin>>n;
        ac=0;
        int flag=1;
        while(n--)
        {
            cin>>s;
            if(s=="donate")
            {
                cin>>n1;
                ac=ac+n1;
            }
            else if(s=="report")
            {
                if(flag==1)
                    cout<<"Case "<<t<<":"<<endl;
                cout<<ac<<endl;
                flag=0;
            }
        }
        t++;

    }

    return 0;
}

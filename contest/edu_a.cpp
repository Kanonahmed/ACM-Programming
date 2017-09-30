#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q;
    string s;
    cin>>n>>p>>q;
    cin>>s;
    if(n%p==0)
    {
        cout<<n/p<<endl;
        int cnt=0;
        for(int i=0; i<s.size(); i++)
        {
            cnt++;
            cout<<s[i];
            if(cnt==p)
            {
                cnt=0;
                cout<<endl;
            }
        }

    }
    else if(n%q==0)
    {
        cout<<n/q<<endl;
        int cnt=0;
        for(int i=0; i<s.size(); i++)
        {
            cnt++;
            cout<<s[i];
            if(cnt==q)
            {
                cnt=0;
                cout<<endl;
            }
        }

    }
    else if(p>n||q>n)cout<<"-1"<<endl;
    else if((n-q)%p==0)
    {
        cout<<((n-q)/p)+1<<endl;
        int cnt=0;
        for(int i=0; i<s.size()-q; i++)
        {
            cnt++;
            cout<<s[i];
            if(cnt==p)
            {
                cnt=0;
                cout<<endl;
            }
        }
        for(int i=s.size()-q; i<s.size(); i++)cout<<s[i];
        cout<<endl;
    }

    else if((n-p)%q==0)
    {
        cout<<((n-p)/q)+1<<endl;
        int cnt=0;
        for(int i=0; i<s.size()-p; i++)
        {
            cnt++;
            cout<<s[i];
            if(cnt==q)
            {
                cnt=0;
                cout<<endl;
            }
        }
        for(int i=s.size()-p; i<s.size(); i++)cout<<s[i];
        cout<<endl;
    }
    else cout<<"-1"<<endl;
    return 0;
}

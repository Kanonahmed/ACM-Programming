#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    string a,b;
    vector<char>sa,sb;
    int as,bs,tc,t;
    cin>>tc;
    getchar();
    t=1;
    while(tc)
    {
        as=0;
        bs=0;
        getline(cin,a);
        getline(cin,b);
        for(int j=0; j<a.size(); j++)
        {
            if(a[j]>='a'&&a[j]<='z'||a[j]>='A'&& a[j]<='Z')
            {
                as++;
                sa.push_back(a[j]);
            }
        }
        for(int j=0; j<b.size(); j++)
        {
            if((b[j]>='a'&&b[j]<='z')||(b[j]>='A'&&b[j]<='Z'))
            {
                bs++;
                sb.push_back(b[j]);
            }
        }

        if(as!=bs)
            cout<<"Case "<<t<<":"<<" No"<<endl;
        else
        {
            for(int i=0; i<sa.size(); i++)
            {
                if(sa[i]>='a'&&sa[i]<='z')sa[i]=sa[i]-32;
                if(sb[i]>='a'&&sb[i]<='z')sb[i]=sb[i]-32;
            }
            vector<char>::iterator ii;

            sort(sa.begin(),sa.end());
            sort(sb.begin(),sb.end());
            int flag=0;
            for(int i=0; i<sa.size(); i++)
            {
                if(sa[i]!=sb[i])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                cout<<"Case "<<t<<":"<<" No"<<endl;
            else
                cout<<"Case "<<t<<":"<<" Yes"<<endl;

        }

        sa.clear();
        sb.clear();
        a="";
        b="";

        tc--;
        t++;
    }
    return 0;
}

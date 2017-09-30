#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,s1;
        cin>>s;
        string ss="";
        for(int l=0; l<s.size(); l++)
        {
            if(s[l]!='0')
            {
                for(int k=l; k<s.size(); k++)
                    ss+=s[k];
                break;
            }
        }
        s1=ss;
        reverse(s1.begin(),s1.end());
        int t=ss.compare(s1);
        if(t==0)
        {
            cout<<ss<<endl;
        }
        else
        {
            int n=1;

            while(1)
            {
                int g=n;
                string nw="";
                int carry=0;
                for(int i=ss.size()-1; i>=0; i--)
                {
                    int rem=g%10;
                    g=g/10;
                    int sum=ss[i]-'0'+rem+carry;
                    if(sum>9)
                    {
                        nw+=(sum%10)+'0';
                        carry=sum/10;
                    }
                    else
                    {
                        nw+=sum+'0';
                        carry=0;
                    }
                }
                if(carry==1)nw+=carry+'0';
                string p=nw;
                reverse(p.begin(),p.end());
                int l=nw.compare(p);
                if(l==0)
                {
                    cout<<p<<endl;
                    break;
                }
                nw="";
                n++;
            }
        }
    }
    return 0;
}

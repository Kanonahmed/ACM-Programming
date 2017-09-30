#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    int tc,t;
    cin>>tc;
    t=1;
    while(tc--)
    {
        cin>>s>>s1;
        int j=-1;
        int sum=0;
        int k=0,a[5];
        for(int i=s1.size()-1; i>=0; i--)
        {
            if(s1[i]=='.')
            {
                a[k++]=sum;
                sum=0;
                j=-1;
                continue;
            }
            else
                j++;
            sum+=(s1[i]-'0')*pow(2,j);

        }
        a[k++]=sum;
        reverse(a,a+4);
        sum=0;
        int b[5],l=0;
        for(int j=0; j<s.size(); j++)
        {
            if(s[j]=='.')
            {
                b[l++]=sum;
                sum=0;
                continue;
            }
            sum=sum*10+s[j]-'0';
        }
        b[l++]=sum;
        int flag=1;
        for(int i=0; i<4; i++)
        {
            if(a[i]!=b[i])
            {
                flag=0;
                break;
            }
        }
        if(flag)cout<<"Case "<<t<<": "<<"Yes"<<endl;
        else
            cout<<"Case "<<t<<": "<<"No"<<endl;
        s="";
        s1="";
        sum=0;
        memset(a,0,sizeof a);
        memset(b,0,sizeof b);
        t++;
    }
    return 0;
}

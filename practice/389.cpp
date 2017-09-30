#include<bits/stdc++.h>
using namespace std;
string h,s;
long long  sum;
int convert(int n,int to)
{
    sum=0;
    int l=0;
    int k=0;
    if(n==10)
    {
        for(int i=0; i<s.size(); i++)
        {
            sum=sum*10+s[i]-'0';
            // k++
        }
    }
    if(n!=10)
    {
        for(int i=s.size()-1; i>=0; i--)
        {
            int p;
            if(s[i]>='0'&&s[i]<='9')
            {
                p=s[i]-'0';
               // cout<<p<<endl;
                sum+=p*pow(n,l);
                //cout<<sum<<endl;
                l++;
            }
            else
            {
                p=s[i]-'A'+10;
                sum+=p*pow(n,l);
                l++;
            }

        }
    }
    if(to!=10)
    {
        if(sum==0)h+='0';
        while(sum)
        {
            int rem=sum%to;
            if(rem>9)
            {
                string g="";
                g+='A'+(rem-10);
                h+=g;
            }
            else h+=rem+'0';
            sum/=to;
        }
        reverse(h.begin(),h.end());
        if(h.size()>7)return -5;
        else return 5;
    }
    else
    {
        long long  lg=sum;
        while(lg)
        {
            lg/=10;
            k++;
        }
        if(k>7)return -5;
        return 1;
    }
}
int main()
{
    int n,k;
    while(cin>>s>>n>>k)
    {
        int t=convert(n,k);
        if(t==-5)printf("  ERROR\n");
        else if(t==1) printf("%7d\n",sum);
        else
        {
            for(int i=1; i<=7-h.size(); i++)printf(" ");
            cout<<h<<endl;
        }
        sum=0;
        s.clear();
        h.clear();
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,tem,i;
    string a,s,p;
    cin>>n;
    cin>>a;
    p=a;
    for(i=0; i<n; i++)
    {
        tem=a[i]-'0';
        tem=10-tem;
        s="";
        for(int j=i; j<n; j++)
        {

            s+=((a[j]-'0'+tem)%10)+'0';
        }

        for(int k=0; k<i; k++)
            s+=((a[k]-'0'+tem)%10)+'0';
        if(p>s)
            p=s;

    }
    cout<<p<<endl;


    return 0;
}

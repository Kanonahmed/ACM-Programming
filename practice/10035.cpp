#include<bits/stdc++.h>
#define ll long long
using namespace std;
int carry(int a,int b,int c,int cnt)
{
    if(a+b!=0)
    {
        int fs=a%10;
        int sn=b%10;
        if((fs+sn+c)>9)
        {
            cnt++;
            c=(fs+sn+c)/10;
        }
        else c=0;
        carry(a/10,b/10,c,cnt);
    }
    else return cnt;
}
int main()
{
    unsigned int  n,m;
    while(cin>>n>>m)
    {

        if(n==0&&m==0)break;
        int t=carry(n,m,0,0);
        if(t==0)cout<<"No carry operation."<<endl;
        else if(t==1)
        cout<<t<<" carry operation."<<endl;
        else
        cout<<t<<" carry operations."<<endl;
    }


    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sum1,sum2,result;
    int tc,t;
    cin>>tc;
    t=1;
    while(tc--)
    {
        cin>>a>>b;
        sum1=((a-1)/3)*2;
        if((a-1)%3>1)
            sum1+=1;
        sum2=(b/3)*2;
        if(b%3>1)
            sum2+=1;
        result=sum2-sum1;
        cout<<"Case "<<t<<": "<<result<<endl;
        t++;
    }
}

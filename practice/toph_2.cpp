#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,n,tc=1;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>n;
        if((a-b)==(b-c)){
                 int df=b-a;
                 int ans=a;
                 for(int i=1;i<n;i++)ans+=df;
                cout<<"Case "<<tc++<<": "<<ans<<endl;
        }
        else cout<<"Case "<<tc++<<": "<<"Error"<<endl;
    }
    return 0;
}

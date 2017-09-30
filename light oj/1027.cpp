#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,ks=1;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int sum=0,cnt=0;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;sum+=abs(x);
            if(x<0)cnt++;
        }
        if(cnt==n)
            cout<<"Case "<<ks++<<": inf"<<endl;
            else
            {
                int cm=__gcd(sum,n-cnt);
                cout<<"Case "<<ks++<<": "<<sum/cm<<"/"<<(n-cnt)/cm<<endl;
            }
    }



    return 0;
}
